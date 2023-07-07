#include "main.h"
/**
 * _strncpy - A function that copies a string
 * @dest: The value to be checked
 * @src: The value to be checked
 * @n: The value to be checked
 * Return: Void
 */

char *_strncpy(char *dest, char *src, int n)
{
	int b;

	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[b] = src[b];
		b++;
	}
	while (b < n)
	{
		dest[b] = '\0';
		b++;
	}
	return (dest);
}
