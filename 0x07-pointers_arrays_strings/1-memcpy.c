#include "main.h"
/**
 * _memcpy - A function that copies memory area
 * @dest: Place where memory is stored
 * @src: Where memory is copied
 * @n: Number of bytes
 * Return: A pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int i = n;

	for (; j < i; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
