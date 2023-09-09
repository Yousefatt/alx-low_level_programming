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
int v = 0;
while (v < 10)
{
	putchar(v + '0');
	v++;
}
putchar('\n');
return (0);
}
