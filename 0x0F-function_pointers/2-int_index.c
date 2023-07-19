#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - A function that searches for an integer
 * @array: Array of integer
 * @size: Number of elements in the array
 * @cmp: Pointer to function to compare value
 * Return: Index of first integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0)
	{
	if (array != NULL && cmp != NULL)
	{
	for (i = 0; i < size; i++)
	{
	if (cmp(array[i]))
		return (i);
	}
	}
	}
		return (-1);
}
