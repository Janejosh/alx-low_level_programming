#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - A function that reallocates a memory block using malloc and free
 * @ptr: Pointer allocated to a memory
 * @old_size: Old size of allocated pointer
 * @new_size: New size of allocated pointer
 * Return: Pointer to the new size
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	return (p);
	}
	else
	{
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	}
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
	{
		p[i] = ((char *) ptr)[i];
	}
	free(ptr);
	return (p);
}
