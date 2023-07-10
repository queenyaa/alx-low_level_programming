#include "main.h"
#include <stdlib.h>
#define NULL ((void *)0)

/**
 * alloc_grid - 2D grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2D array
 */

int **alloc_grid(int width, int height)
{
	int c, d;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	/*allocating memory for grid integers*/
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL); /*memory allocationfailed*/
	}
	/*allocating memory for each row*/
	for (c = 0; c < height; c++)
	{
		grid[c] = (int *)malloc(width * sizeof(int));
		if (grid[c] == NULL)
		{
			/*free previous memory*/
			for (d = 0; d < c; d++)
			{
				free(grid[d]);
			}
			free(grid);
			return (NULL); /*memory allocation failed*/
		}

		/*initialize each element of the row to 0*/
		for (d = 0; d < width; d++)
		{
			grid[c][d] = 0;
		}
	}
	return (grid);
}
