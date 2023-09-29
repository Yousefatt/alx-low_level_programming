#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 *
 * @x: given number
 * @y: power of the given number
 *
 * Return: power of given number
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	return (_pow_recursion(x, y));
}
