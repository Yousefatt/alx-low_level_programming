#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array
 *
 * @nmemb: no of size of the array
 * @size: the bytes of the array
 *
 * Return: returns a pointer to the allocated memory,
 *  If nmemb or size is 0, then _calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *point;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);
	point = malloc(nmemb * size);
	if (point == NULL)
		return (NULL);
	for (x = 0; x < nmemb * size; x++)
		point[x] = 0;
	return (point);
}
