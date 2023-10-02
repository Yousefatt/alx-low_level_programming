#include "main.h"

/**
 * *_strcpy - copies the string point to be src
 * @dest: char type string
 * @src: char type string
 * Description: copy the string pointed to pointer by 'src' to
 * the buffer pointed by 'dest'
 * Return: pointer to 'dest'
 */

char *_strcpy(char *dest, char *src)
{
	int n = -1;

	do {
		n++;
		dest[n] = src[n];
	} while (src[n] != '\0');
	return (dest);
}
