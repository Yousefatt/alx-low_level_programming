#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 *
 * @separator: string to be printed
 * @n: number of strings
 *
 * Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list argu;
	unsigned int x;
	char *string;

	va_start(argu, n);
	for (x = 0; x < n; x++)
	{
		string = va_arg(argu, char*);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (x < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(argu);
	printf("\n");
}
