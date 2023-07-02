#include "dog.h"

/**
 * init_dog - initializes a variable type struct dog
 * @name: name to initialize
 * @age: age to initialize
 * @d: pointer to struct dog
 * @owner: owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
