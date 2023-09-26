#include <stdio.h>

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
	int a, b, c;

	b = 0;
	c = 0;

	for (a = 0; a < (size * size); a++)
	{
		if (a % (size + 1) == 0)
			b += a[a];
		if (a % (size - 1) == 0 && a != 0 && a < size * size - 1)
			c += a[ib;
	}
	printf("%d, %d\n", b, c);
}
