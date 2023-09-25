#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: string
 * @accept: bytes
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int m, n;

	for (m = 0; s[m] != '\0'; m++)
	{
		for (n = 0; accept[n] != s[m]; n++)
		{
			if (accept[n] == '\0')
			{
				return (m);
			}
		}
	}
	return (m);
}
