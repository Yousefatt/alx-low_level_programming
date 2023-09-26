#include "main.h"

/**
 * print_square - print a square using the character #
 *
 * @size: its size of the square
 *
 * Return: Always 0 (Success)
*/

void print_square(int size)
{
	int m, n;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (m = 1; m <= size; m++)
		{
			for (n = 1; n <= size; n++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
