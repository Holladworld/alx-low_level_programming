#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @owner: owner of dog
 * @age: age if dog
 * Return: struct dog
 * if fails, return NULL.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;
	int d, dname, downer;

	doggy = malloc(sizeof(doggy));

	if (doggy == NULL || !(name) || !(owner))
	{
		free(doggy);
		return (NULL);
	}

	for (dname = 0; name[dname]; dname++)
		;
	for (downer = 0; owner[downer]; downer++)
		;
	doggy->name = malloc(dname + 1);
	doggy->owner = malloc(downer + 1);

	if (!(doggy->name) || !(doggy->owner))
	{
		free(doggy->owner);
		free(doggy->name);
		free(doggy);
		return (NULL);
	}

	for (d = 0; d < dname; d++)
		doggy->name[d] = name[d];
	doggy->name[d] = '\0';

	doggy->age = age;

	for (d = 0; d < downer; d++)
		doggy->owner[d] = owner[d];
	doggy->owner[d] = '\0';

	return (doggy);
}



