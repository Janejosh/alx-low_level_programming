#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *allocate_buffer(char *file);
void close_file(int fd);

/**
 * allocate_buffer - A function that allocates 1024 bytes to a buffer
 * @file: The file name to be allocated
 * Return: Pointer to the allocated buffer
 */

char *allocate_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - A function that closes a file descriptor
 * @fd: The file descriptor to be closed
 * Return: Nothing
 */

void close_file(int fd)
{
	int i;

	i = close(fd);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - A function that copies the content of a file to another file
 * @argc: The argument counts
 * @argv: The argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = allocate_buffer(argv[2]);
	a = open(argv[1], O_RDONLY);
	r = read(a, buffer, 1024);
	b = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (a == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Cant't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		w = write(b, buffer, r);
		if (b == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		r = read(a, buffer, 1024);
		b = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	free(buffer);
	close_file(a);
	close_file(b);
	return (0);
}
