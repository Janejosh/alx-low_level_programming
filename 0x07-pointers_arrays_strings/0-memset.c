#include "main.h"
/**
 * _memset - A function that fills memory with a constant byte
 * @s: Address of memory to be filled
 * @b: The value to be checked
 * @n: Number of bytes to be changed
 * Return: A pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
