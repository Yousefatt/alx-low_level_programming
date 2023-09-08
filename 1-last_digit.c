#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 *main - Entry point
 *
 *Description: print value of n satus; positive, negative or zero
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int y = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (y == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, y);
	} else if (y > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, y);
	} else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, y);
	}
	return (0);
}
