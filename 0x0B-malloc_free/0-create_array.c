#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creates an array of chars
 *
 * @size: size of memory to print
 * @c: char to define the array
 *
 * Return: Returns a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int x;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == 0)
		return (NULL);

	for (x = 0; x < size; x++)
		arr[x] = c;

	return (arr);
}
