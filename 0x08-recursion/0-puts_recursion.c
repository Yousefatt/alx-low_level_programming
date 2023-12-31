#include "main.h"

/**
 * _puts_recursion - prints a string
 *
 * @s: pointer
 *
 * Return: Always 1 (Success)
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar ('\n');
		return;
	}
	putchar (*s);
	_puts_recursion(s + 1);
}
