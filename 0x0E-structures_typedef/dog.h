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

typedef struct dog dog_t;

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
