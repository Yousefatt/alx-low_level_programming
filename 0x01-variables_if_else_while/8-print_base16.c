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
int k = 0;
char v;
while (k <= 10)
{
	putchar(k + '0');
	k++;
}
for (v = 'a'; v < 'g'; v++)
{
	putchar(v);
}
putchar('\n');
return (0);
}
