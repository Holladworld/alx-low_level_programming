#include "dog.h"
#include <stdlib.h>
int _strlen(char *str);
char *_strcopy(char *dest, char *src);

/**
 * _strlen - find the length of a string
 * @str: string to be measured
 * Return: length of string
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}

/**
 * _strcopy - copy a string pointed to src, include
 * the terminating null byte to buffer pointed to dest.
 * @dest: buffer storing string copy
 * @src: source string
 *
 * Return: The pointer to dest
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

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

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	doggy->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}
	doggy->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (doggy->owner == NULL)
	{
		free(doggy->name);
		free(doggy);
		return (NULL);
	}
	doggy->name = _strcopy(doggy->name, name);
	doggy->age = age;
	doggy->owner = _strcopy(doggy->owner, owner);

	return (doggy);
}
