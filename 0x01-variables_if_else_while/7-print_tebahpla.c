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
char g = 'z';
while (g >= 'a')
{
	putchar(g);
	g--;
}
putchar('\n');
return (0);
}
