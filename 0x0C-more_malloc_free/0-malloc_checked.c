#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using malloc
 *
 * @b: size of allocated memory
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *memo;

	memo = malloc(b);

	if (memo == NULL)
		exit(98);
	return (memo);
}
