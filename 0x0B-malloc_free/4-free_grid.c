#include "main.h"
#include <stdlib.h>
#define NULL ((void *)0)
/**
 * free_grid - free space of 2D array
 * @grid: 2D array
 * @height: height of 2D grid
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int c;

	if (grid == NULL)
	{
		return;
	}

	/*freeing memory of reach row*/
	for (c = 0; c < height; c++)
	{
		free(grid[c]);
	}

	/*free memory of the grid itself*/
	free(grid);
}
