#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - Pointer to two dimensional array
 *
 * @width: width
 * @height: height
 *
 * Return: NULL on failure or pointer to grid
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int h;
	int w;

	h = 0;
	if (width == 0 || height == 0)
	{
		return (0);
	}
	grid = malloc(sizeof(int *) * height);
	if (grid == 0)
	{
		free(grid);
		return (0);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == 0)
		{
			for (i = i ; i >= 0; i--)
			{
				free(grid[i]);
			}
			free(grid);
			return (0);
		}
	}
	while (h < height)
	{
		w = 0;
		while (w < width)
		{
			grid[h][w] = 0;
			w++;
		}
		h++;
	}
	return (grid);
}
