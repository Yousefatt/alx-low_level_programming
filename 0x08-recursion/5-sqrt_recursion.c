#include "main.h"

/**
 * sear_squrt - search the square root of a number
 *
 * @n: number to get the square root of
 * @x: iterator
 *
 * Return: the square root of n
 * -1 if n does not have a natural square root
 */

int sear_squrt(int n, int x)
{
	if (x * x > n)
		return (-1);
	if (x * x == n)
		return (x);
	return (sear_squrt(n, x + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: number to find the square root of
 *
 * Return: the square root of n
 * -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sear_squrt(n, 0));
}
