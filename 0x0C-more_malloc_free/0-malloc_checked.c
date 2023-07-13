#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - A function that allocates memory using malloc
 * @b: The size of memory to be allocated
 * Return: A pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
