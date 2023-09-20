#include "main.h"

/**
 *print_array - prints n array of an array of an int
 *
 *@n: elements parameters input
 *@a: string parameters input
 *
 *Return: Nothing
*/

void print_array(int *a, int n)
{
	int u;

	for (u = 0; u < n; u++)
	{
		if (u != (n - 1))
			printf("%d, ", a[u]);
		else
			printf("%d", a[u]);
	}
	printf("\n");
}
