#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - create new array bidimensional
 * @width: integer width
 * @height: integer height
 *
 * Return: new.
 */
int **alloc_grid(int width, int height)
{
	int x, y;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (y = 0; y < height; y++)
	{
		grid[y] = malloc(sizeof(int) * width);
		if (grid[y] == NULL)
		{
			for (; y >= 0; y--)
				free(grid[y]);

			free(grid);
			return (NULL);
		}
		for (x = 0; x < width; x++)
			grid[y][x] = 0;
	}
	return (grid);
}
