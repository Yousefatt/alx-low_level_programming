#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that multiplies two numbers
 *
 * @argc: argu count
 * @argv: argu vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		x = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", x);
	}
	return (0);
}
