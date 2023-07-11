#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - A function that returns a pointer to a
 * 2 dimensional array of integers
 * @width: width of the grid
 * @height: Height of the grid
 * Return: A pointer to a 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	int **a;
	int i, b, c, d;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = malloc(sizeof(int *) * height);
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
	a[i] = malloc(sizeof(int) * width);
	if (a[i] == NULL)
	{
	for (b = i; b >= 0; b--)
	{
		free(a[b]);
	}
		free(a);
		return (NULL);
	}
	}
	for (c = 0; c < height; c++)
	{
	for (d = 0; d < width; d++)
	{
		a[c][d] = 0;
	}
	}
	return (a);
}
