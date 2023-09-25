#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9
 *		exceept 2 and 4
 *		only use _putchar twice
 *
 * Return: Always 0 (seccess)
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
