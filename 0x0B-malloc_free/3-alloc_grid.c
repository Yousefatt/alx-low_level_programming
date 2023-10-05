#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid -  returns a pointer to a 2 dimensional array of integers
 *
 * @width: the width of array
 * @height: the height of array
 *
 * Return: pointer to an array
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int y, z;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);

	for (y = 0; y < height; y++)
	{
		array[y] = malloc(sizeof(int) * width);
		if (array[y] == NULL)
		{
			for (z = 0; z < y; z++)
				free(array[z]);
			free(array);
			return (NULL);
		}

		for (z = 0; z < width; z++)
			array[y][z] = 0;
	}

	return (array);
}
