#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - function to get lenth of string
 *
 * @string: string tht we will get its lenth
 *
 * Return: lenth of string
 */

int _strlen(const char *string)
{
	int lenth = 0;

	while (*string++)
		lenth++;
	return (lenth);
}

/**
 * _strcopy - function to copy string from value and put it in another value
 *
 * @source: string to copy
 * @dest: copyied here
 *
 * Return: copied string
 */

char *_strcopy(char *dest, char *source)
{
	int x;

	for (x = 0; source[x]; x++)
		dest[x] = source[x];
	dest[x] = '\0';

	return (dest);
}

/**
 * new_dog - function to creat new dog
 *
 * @name: name of a dog
 * @age: age of a dog
 * @owner: dog's owner
 *
 * Return: struct pointer dog
 *		Null if it fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *adog;

	/*return zero if owner name is empty or age less than zero*/
	if (!name || age < 0 || !owner)
		return (NULL);

	adog = (dog_t *)malloc(sizeof(dog_t));
	if (adog == NULL)
		return (NULL);

	adog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*adog).name == NULL)
	{
		free(adog);
		return (NULL);
	}

	adog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*adog).owner == NULL)
	{
		free(adog->name);
		free(adog);
		return (NULL);
	}

	adog->name = _strcopy(adog->name, name);
	adog->age = age;
	adog->owner = _strcopy(adog->owner, owner);

	return (adog);
}
