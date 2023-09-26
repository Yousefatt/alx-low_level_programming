#include"main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the numb of times the \ character
 *     should be printed
*/

void print_diagonal(int n)
{
	int post, spac;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (post = 1; post <= n; ++post)
		{
			for (spac = 1; spac <= post; ++spac)
				_putchar(' ');
			_putchar(92); /*is equal to '/' char*/
			_putchar('\n');
		}
	}
}
