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
int k;
char v;
for (k = 0; k <= 10; k++)
{
	putchar(k + '0');
}
for (v = 'a'; v < 'g'; v++)
{
	putchar(v);
}
putchar('\n');
return (0);
}
