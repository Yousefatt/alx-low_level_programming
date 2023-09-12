#include "main.h"

/**
 * print_alphabet_x10 - this prints letters
 *
 * Description: print_alphabet_x10
 *
 * Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
int charac;
int repeat = 0;
while (repeat < 10)
{
for (charac = 'a'; charac <= 'z'; charac++)
{
	putchar(charac);
}
	repeat++;
	putchar('\n');
}
}
