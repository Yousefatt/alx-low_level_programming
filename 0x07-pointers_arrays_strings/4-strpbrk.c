#include "main.h"

/**
 * _strpbrk - a function that searches for string
 *
 * @s: pointer to string
 * @accept: pointer to string
 *
 * Return: pointer to the bytes
*/

char *_strpbrk(char *s, char *accept)
{
	int z, x;

	z = 0;
	while (s[z] != '\0')
	{
		x = 0;
		while (accept[x] != '\0')
		{
			if (s[z] == accept[x])
			{
				return (s + z);
			}
			x++;
		}
		z++;
	}
	return ('\0');
}
