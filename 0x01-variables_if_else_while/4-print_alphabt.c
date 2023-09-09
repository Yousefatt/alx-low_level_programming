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
char e = 'a';
while (e <= 'z')
{
	if (e != 'e' && e != 'q')
	{
	putchar(e);
	}
	e++;
}
putchar('\n');
return (0);
}
