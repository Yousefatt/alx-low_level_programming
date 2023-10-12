#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 *
 * @separator: a pointer to string
 * @n: numb of values
 * @...: entire values tht been print
 *
 * Return: numbers within string
 *	if separator is Null, dont print
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list argu;

	va_start(argu, n)
	if (separator)
		separator = "";
	for (x = 0; x < n; x++)
	{
		if (x == (n - 1))
			printf("%d", va_arg(argu, int));
		else
			printf("%d%s", va_arg(argu, int), separator);
	}
	printf("\n");
	va_end(argu);
}
