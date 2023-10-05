#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created by alloc_grid
 *
 * @grid: grid tht have been freed
 * @height: height of the freed grid
 *
 * Return: void
*/
void free_grid(int **grid, int height)
{
	int x;

	if (grid == NULL || height <= 0)
		return;

	for (x = 0; x < height; x++)
		free(grid[x]);

	free(grid);
}
