#include "main.h"
#include <stdio.h>

void check_IO_stat(int stat, int fd, char *filename, char mode);

/**
 * main - A function that copies the the content of a file
 * to another file
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 1 on success, exit if otherwise
 */

int main(int argc, char *argv[])
{
	char buffer[1024];
	int src, dest, nr = 1024, w, cl_src, cl_dest;
	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}
	src = open(argv[1], O_RDONLY);
	check_IO_stat(src, -1, argv[1], '0');
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	check_IO_stat(dest, -1, argv[2], 'W');
	while (nr == 1024)
	{
		nr = read(src, buffer, sizeof(buffer));
		if (nr == -1)
			check_IO_stat(-1, -1, argv[1], '0');
		w = write(dest, buffer, nr);
		if (w == -1)
			check_IO_stat(-1, -1, argv[2], 'W');
	}
	cl_src = close(src);
	check_IO_stat(cl_src, src, NULL, 'C');
	cl_dest = close(dest);
	check_IO_stat(cl_dest, dest, NULL, 'C');
	return (0);
}

/**
 * check_IO_stat - A function that checks if a file can be
 * open or closed
 * @stat: The file descriptor of file to be opened
 * @filename: The name of the file
 * @mode: The closing or opening mode
 * @fd: The file descriptor
 * Return: Void
 */

void check_IO_stat(int stat, int fd, char *filename, char mode)
{
	if (mode == 'C' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	else if (mode == 'W' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	else if (mode == '0' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
}
