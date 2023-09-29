#include "main.h"

/**
 * void _print_rev_recursion - prints a string in reverse
 *
 * @s: pointer
 *
 * Return: Always 1 (Success)
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	putchar (*s);
}
