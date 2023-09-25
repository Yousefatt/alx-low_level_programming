#include "main.h"

/**
 * print_most_numbers - print 0 - 9 apart
 *		   from 2 and 4 and you can
 *		   only use _putchar twice
 * Return: Always 0 (Success)
*/

void print_most_numbers(void)
{
	int x = 0;

	while (x != 2 && x != 4)
	{
		_putchar (x + '0');
		x++;
	}
	_putchar ('\n');
}
