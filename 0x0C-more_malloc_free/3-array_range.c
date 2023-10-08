#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - a function that creates an array of integers
 *
 * @min: minimum value
 * @max: maxium value
 *
 * Return: the pointer to the newly created array
 *  If min > max, return NULL,
 *   If malloc fails, return NULL
 */

int *array_range(int min, int max)
{
	int *ptr;
	int z, the_size;

	if (min > max)
		return (NULL);

	the_size = max - min + 1;

	ptr = malloc(sizeof(int) * the_size);

	if (ptr == NULL)
		return (NULL);

	for (z = 0; z < the_size; z++)
		ptr[z] = min++;

	return (ptr);
}
