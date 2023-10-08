#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers.
 *
 * @argc: argu count
 * @argv: argu vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x, y, equal = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (x = 1; x < argc; x++)
		{
			for (y = 0; argv[x][y]; y++)
			{
				if (!(argv[x][y] >= '0' && argv[x][y] <= '9'))
				{
					printf("Error\n");
					return (1);
				}
			}
			equal += atoi(argv[x]);
		}
	}
	printf("%d\n", equal);
	return (0);
}
