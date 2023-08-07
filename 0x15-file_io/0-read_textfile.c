#include "main.h"
/**
 * read_textfile - A function that reads a text file and prints it
 * to the POSIX standard output
 * @filename: The name of the file to be read
 * @letters: The number of letters to be read and printed
 * Return: The actual number of letters it could read and print
 * or 0 if otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r, w, fd;
	char *buffer;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	r = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);
	free(buffer);
	close(fd);
	return (w);
}
