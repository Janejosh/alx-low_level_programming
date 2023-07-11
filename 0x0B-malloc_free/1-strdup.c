#include "main.h"
#include <stdlib.h>
/**
 * _strdup - A function that returns a pointer to a newly allocated
 * space in memory
 * @str: String char to be duplicated
 * Return: Duplicated string
 */

char *_strdup(char *str)
{
	char *s;
	int a = 0, b = 1;

	if (str == NULL)
		return (NULL);
	while (str[b])
	{
		b++;
	}
	s = malloc((sizeof(char) * b) + 1);
	if (s == NULL)
		return (NULL);
	while (a < b)
	{
		s[a] = str[a];
		a++;
	}
	s[a] = '\0';
	return (s);
}
