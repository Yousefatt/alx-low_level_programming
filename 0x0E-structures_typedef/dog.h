#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struction for information ab dog
 *
 * @age: age of the dog
 * @name: pointer to name of this dog
 * @owner: pointer to name of owner of this dog
 *
 * Return: 0
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
