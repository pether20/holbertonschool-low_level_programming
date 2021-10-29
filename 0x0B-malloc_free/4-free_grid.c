#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - liberate memory new array bidimensional
 * @grid: array
 * @height: integer height
 *
 *
 */
void free_grid(int **grid, int height)
{
	int y;

	for (y = 0; y < height; y++)
	{
		free(grid[y]);
	}
	free(grid);
}
