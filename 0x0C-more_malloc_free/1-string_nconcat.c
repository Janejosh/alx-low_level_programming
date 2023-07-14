#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - A function that concatenates two strings
 * @s1: The first string
 * @s2: Second string
 * @n: The number of s2 to be added to s1
 * Return: Pointer to the allocated memory, NULL if it fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int a = 0, b = 0, c = 0, d = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[a])
		a++;
	while (s2[c])
		c++;
	if (n >= c)
		d = c + a;
	else
		d = n + a;
	str = malloc(sizeof(char) * (d + 1));
	if (str == NULL)
		return (NULL);
	c = 0;
	while (b < d)
	{
	if (b <= a)
		str[b] = s1[b];
	if (b >= a)
	{
		str[b] = s2[c];
		c++;
	}
	b++;
	}
	str[b] = '\0';
	return (str);
}
