#include "main.h"

/**
 * free_grid - entry
 * @grid: input
 * @height: input
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
	{
		free(grid[k]);
	}
	free(grid);
}
