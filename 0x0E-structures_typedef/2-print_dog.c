#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: the struct dof to be printed
 * Return: 0
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (null)\n");
	else
		printf("Name: %s\n", d->name);

	if (d->age < 0)
		printf("Age: (null)\n");
	else
		printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (null)\n");
	else
		printf("Owner: %s\n", d->owner);
}
