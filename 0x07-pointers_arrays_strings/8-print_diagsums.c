#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - print the sum of two 2d array
 *
 * @a: input pointer
 * @size: size of matrix
 *
 * Return: nothing
*/

void print_diagsums(int *a, int size)
{
	int x, y, z;

	y = 0;
	z = 0;

	for (x = 0; x < (size * size); x++)
	{
		if (x % (size + 1) == 0)
			y += a[x];
		if (x % (size - 1) == 0 && x != 0 && x < size * size - 1)
			z += a[x];
	}
	printf("%d, %d\n", y, z);
}
