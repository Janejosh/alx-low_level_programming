#include "main.h"
/**
 * _strncat - A function that concatenates two strings
 * @dest: The value to be checked
 * @src: The value to be checked
 * @n: The value to be checked
 * Return: Void
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
