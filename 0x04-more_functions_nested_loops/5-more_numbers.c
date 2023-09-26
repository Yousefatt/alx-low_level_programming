#include "main.h"

/**
 * more_numbers - prints 0 - 14 ten times and you
 *		can only use _putchar three times
 *
 * Return: Always 0 (Success)
*/

void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
			{
				_putchar(b / 10 + 48);

			}
			_putchar(b % 10 + 48);

		}
		_putchar('\n');
	}
}
