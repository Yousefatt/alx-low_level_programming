#include"main.h"
#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: prints _putchar using putchar prototype
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char st[] = "_putchar";
	int word;

	for (word = 0; word < 8; ++word)
		_putchar(st[word]);
	_putchar('\n');

	return (0);
}
