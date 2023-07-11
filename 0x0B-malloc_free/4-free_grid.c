#include "main.h"
#include <stdlib.h>
/**
 * free_grid - A function that frees a 2 dimensional grid
 * @grid: Address of the two dimensional grid
 * @height: Height of the grid
 * Return: Always 0
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
