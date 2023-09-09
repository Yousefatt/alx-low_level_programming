#include <stdio.h>

/**
 *main-Entry point
 *
 *Description: print value of n satus; positive, negative or zero
 *
 * Return: Always 0 (success)
*/

int main(void)
{
int d;
for (d = 0; d < 10; d++)
{
	putchar(d + '0');
	putchar(',');
	putchar(' ');
}
putchar('\n');
return (0);
}
