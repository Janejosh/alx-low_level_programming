#include "main.h"
/**
 * char *_strcpy - A function that copies the string pointed to by src
 * @dest: Copy to
 * @src: Copy from
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int x = 0;

	while (*(src + 1) != '\0')
	{
		i++;
	}
	for ( ; x < i ; x++)
	{
		dest[x] = src[x];
	}
	dest[1] = '\0';
	return (dest);
}
