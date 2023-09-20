#include "main.h"

/**
 *rev_string-reverses a string
 *@s: sring to be reverses
 *
 *Return: void
 */

void rev_string(char *s)
{
	int x, z;
	char word;

	/*find string lenth without null*/
	for (x = 0; s[x] != '\0'; ++x)
		;

	/*swap strings by swapping the char*/
	for (z = 0; z < x / 2; z++)
	{
		word = s[z];
		s[z] = s[x - 1 - z]; /*1 here cuz array start from 0*/
		s[x - 1 - z] = word;
	}
}
