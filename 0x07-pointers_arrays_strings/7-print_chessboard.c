#include "main.h"

/**
 * print_chessboard - print the bord
 *
 * @a: input a pointer
 *
 * Return: nothing
*/

void print_chessboard(char (*a)[8])
{
	int number1, number2;

	number0 = 0;
	number1 = 0;
	while (number0 < 64)
	{
		if (number0 % 8 == 0 && number0 != 0)
		{
			number1 = number0;
			_putchar('\n');
		}

		_putchar(a[number0 / 8][number0 - number1]);
		number0++;
	}
	_putchar('\n');
}
