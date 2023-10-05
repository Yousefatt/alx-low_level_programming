#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 *
 * @s1: frist pointer to frist string
 * @s2: sec pointer to sec string
 *
 * Return: return NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *poin;
	int m, n, str1, str2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (str1 = 0; s1[str1] != '\0'; str1++)
		;
	for (str2 = 0; s2[str2] != '\0'; str2++)
		;

	poin = malloc(sizeof(char) * (str1 + str2 + 1));

	if (poin == NULL)
		return (NULL);

	for (m = 0; m < str1; m++)
		poin[m] = s1[m];

	for (n = 0; n < str2; n++)
		poin[m + n] = s2[n];

	poin[m + n] = '\0';

	return (poin);
	free(poin);
}
