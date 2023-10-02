#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: pointer
 * @c: constant
 * Return: pointer
 */

char *_strchr(char *s, char c)
{
	int z;

	for (z = 0; s[z] >= '\0'  ; z++)
	{
		if (s[z] == c)
		{
			return (s + z);
		}
	}

	return ('\0');
}
