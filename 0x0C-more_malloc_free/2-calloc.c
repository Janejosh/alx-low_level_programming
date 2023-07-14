#include "main.h"
#include <stdlib.h>
/**
 * _calloc - A function that allocates memory for an array, using malloc
 * @nmemb: where memory is allocated
 * @size: Size of the element
 * Return: Nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i = 0, j = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	j = nmemb * size;
	p = malloc(j);
	if (p == NULL)
		return (NULL);
	while (i < j)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
