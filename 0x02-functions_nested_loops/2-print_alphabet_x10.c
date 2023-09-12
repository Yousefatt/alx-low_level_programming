#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - utilizes on the _putchar function to print
 *                 the alphabet a - z
*/

void print_alphabet(void)
{
int charac;
int repeat = 0;
while (repeat <= 10)
{
for (charac = 'a'; charac <= 'z'; charac++)
{
        putchar(charac);
}
        putchar('\n');
}
}
