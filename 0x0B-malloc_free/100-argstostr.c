#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - A function that concatenates all the arguments of your program
 * @ac: The number of argument
 * @av: The argument vector
 * Return: Pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int a, b, c, d;

	a = 0;
	b = 0;
	c = 0;
	d = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (b < ac)
	{
	while (av[b][c])
	{
		a++;
		c++;
	}
	c = 0;
	b++;
	}
	s = malloc((sizeof(char) * a) + ac + 1);
	b = 0;
	while (av[b])
	{
	while (av[b][c])
	{
		s[d] = av[b][c];
		d++;
		c++;
	}
	s[d] = '\n';
	c = 0;
	d++;
	b++;
	}
	d++;
	s[d] = '\0';
	return (s);
}
