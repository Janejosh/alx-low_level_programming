#include "main.h"
/**
 * _strchr - A function that locates a character in a string
 * @s: The value to be checked
 * @c: The value to be checked
 * Return: Always 0
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
	if (s[i] == c)
	return (&s[i]);
	}
	return (0);
}
