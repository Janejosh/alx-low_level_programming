#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - A function that executes a function given as a
 * parameter on each element of an array
 * @array: Array of integer
 * @size: Size of the array
 * @action: Pointer to a function
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
	}
}
