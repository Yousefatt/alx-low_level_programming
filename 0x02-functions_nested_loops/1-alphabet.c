#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - utilizes on the _putchar function to print
 *                 the alphabet a - z
*/

void print_alphabet(void)
{
int charac;
for (charac = 'a'; charac <= 'z'; charac++)
{
	putchar(charac);
}
	putchar('\n')
}
