#include "main.h"

/**
 * print_numbers - print 1 - 9
 *		only use _putchar twice
 *
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	int n;
	for (n = 0; n <= 9; n++)
	{
		_putchar (n + '0');
	}
	_putchar ('\n');

}
