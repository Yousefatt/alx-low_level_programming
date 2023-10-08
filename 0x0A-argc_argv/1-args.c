#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it
 * @argc: argu count
 * @argv: argu vector
 * Return: 0
*/

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
