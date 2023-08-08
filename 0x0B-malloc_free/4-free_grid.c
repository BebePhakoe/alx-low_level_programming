#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Entry point
 * @grid: adress
 * @height: height of grid
 * Return: 2 dimensional grid
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
