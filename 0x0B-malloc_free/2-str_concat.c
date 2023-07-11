#include "main.h"
#include <stdlib.h>
/**
 * str_concat - A function that concatenates two strings
 * @s1: First string to be concatenated
 * @s2: Second string to be concatenated
 * Return: The concatenated 2 strings
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int a, b, c, d;

	a = 0;
	b = 0;
	c = 0;
	d = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[a])
		a++;
	while (s2[b])
		b++;
	d = a + b;
	s = malloc(sizeof(char) * (d + 1));
	if (s == NULL)
		return (NULL);
	b = 0;
	while (c < d)
	{
	if (c <= a)
		s[c] = s1[c];
	if (c >= a)
	{
		s[c] = s2[b];
		b++;
	}
	c++;
	}
	s[c] = '\0';
	return (s);
}
