#include"main.h"

/**
 * print_last_digit - print last digit of a number.
 *
 *	 @n: takes number input
 *
 * Return: lastDigit
*/

int print_last_digit(int n)
{
	int k;

	if (n < 0)
		k = -1 * (n % 10);
	else
		k = n % 10;

	_putchar(k + '0');
	return (k);
}
