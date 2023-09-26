#include"main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: the size of the triangle
 *
 * Return: Always 0 (Success)
*/

void print_triangle(int size)
{
	int hight, le;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (hight = 1; hight <= size; ++hight)
		{
			for (le = 1; le <= size; ++le)
			{
				if ((hight + le) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
