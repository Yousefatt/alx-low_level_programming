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
char u = 'a';
char s = 'A';
while (u <= 'z')
{
       putchar(u);
       u++;
}
while (s <= 'Z')
{
	putchar(s);
	s++;
}
putchar('\n');
return (0);
}

