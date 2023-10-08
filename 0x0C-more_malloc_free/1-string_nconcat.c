#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - a function that concatenates two strings
 *
 * @s1: frist string
 * @s2: sec string
 * @n: size of allocated memory
 *
 * Return: point to a newly allocated space in memory,
 *  If the function fails, it should return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int a, b;
	unsigned int lenth1, lenth2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (lenth1 = 0; s1[lenth1]; lenth1++)
		;
	for (lenth2 = 0; s2[lenth2]; lenth2++)
		;
	if (n >= lenth2)
		n = lenth2;
	ptr = malloc((lenth1 + n + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (a = 0; a < lenth1; a++)
		ptr[a] = s1[a];
	for (b = 0; b < n; b++)
		ptr[a + b] = s2[b];
	ptr[a + b] = '\0';
	return (ptr);
}
