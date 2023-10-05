#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: pointer to string
 *
 * Return: returns a pointer to the duplicated string or
 * It returns NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *arr;
	int y, lenth;

	if (str == NULL)
		return (NULL);

	for (lenth = 0; str[lenth] != '\0'; lenth++)
		;

	arr = malloc(sizeof(char) * (lenth + 1));

	if (arr == NULL)
		return (NULL);

	for (y = 0; y < lenth; y++)
		arr[y] = str[y];

	arr[lenth] = '\0';

	return (arr);
	free(arr);
}
