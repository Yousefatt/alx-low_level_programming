#include "main.h"

/**
 * _strstr - a function that locates a substring
 *
 * @haystack: input string
 * @needle: subtring to search for
 *
 * Return: a pointer to beginning
*/

char *_strstr(char *haystack, char *needle)
{
	char *m, *n;

	while (*haystack != '\0')
	{
		m = haystack;
		n = needle;
		while (*n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (!*n)
			return (m);
		haystack++;
	}
	return ('\0');
}
