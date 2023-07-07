#include "main.h"
/**
 * char *_strcpy - A function that copies the string pointed to by src
 * @dest: Copy to
 * @src: Copy from
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int z = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; z < l ; z++)
	{
		dest[z] = src[z];
	}
	dest[l] = '\0';
	return (dest);
}
