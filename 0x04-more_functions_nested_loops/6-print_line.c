#include "main.h"

/**
 * print_line - print a straight line
 *
 * @n: is the numb of times the _ character
 *     should be printed
*/

void print_line(int n)
{
	int x;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 1; x <= n; x++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
