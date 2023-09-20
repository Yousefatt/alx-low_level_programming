#include "main.h"

/**
 *puts_half - print sec half of string
 *@str: char arra string
 *Descrition: id odd numb of char,print (Lenth - 1) / 2
 */

void puts_half(char *str)
{
	int b;

	for (b = 0; str[b] != '\0'; b++)
		;

	b++;
	for (b /= 2; str[b] != '\0'; b++)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
