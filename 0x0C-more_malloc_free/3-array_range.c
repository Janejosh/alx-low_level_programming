#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - A function that creates an array of integers
 * @min: The min value to be checked
 * @max: The max value to be checked
 * Return: Pointer to the new array
 */

int *array_range(int min, int max)
{
	int *a, i = 0;

	if (min > max)
		return (NULL);
	a = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (a == NULL)
		return (NULL);
	while (min <= max)
	{
		a[i] = min;
		i++;
		min++;
	}
	return (a);
}
