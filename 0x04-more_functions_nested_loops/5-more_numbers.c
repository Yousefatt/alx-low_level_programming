#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *		You can only use _putchar three times
 *
 * Return: Always 1 (Success)
 */

void more_numbers(void)
{
	int a;
	int b = 0;

	while (b < 10)
	{
		for (a = 0; a <= 14; a++)
		{
			_putchar (a + '0');
		}
		_putchar ('\n');
	}
	_putchar ('\n');
}
