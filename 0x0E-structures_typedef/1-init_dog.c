#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize a dog
 *
 * @d: a pointer
 * @name: name of dog
 * @age: age of this dog
 * @owner: name of owner of this dog
 *
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
