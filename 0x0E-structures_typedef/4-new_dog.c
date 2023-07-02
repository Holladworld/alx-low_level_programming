#include "dog.h"
/**
 * _strlen - return length of a string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int strlen = 0;

	while (s[strlen] != '\0')
	{
		strlen++;
	}
	return (strlen);
}
/**
 * _strcpy - copy string address to source
 * @dest: pointer to buffer that will contain the address
 * @src: source where string is copied
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0, addr;

	while (src[len] != '\0')
	{
		len++;
	}
	for (addr = 0; addr < len; addr++)
	{
		dest[addr] = src[addr];
	}
	dest[addr] = '\0';

	return (dest);
}

/**
 * new_dog - create a new dog function
 * @name: name of the new dof
 * @age: age of the dog
 * @owner: owner
 * Return: pointer to the new dog as success else NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *poppy;
	int new_name = _strlen(name);
	int new_owner = _strlen(owner);

	poppy = malloc(sizeof(dog_t));
	if (poppy == NULL)
	{
		free(poppy);
		return (NULL);
	}
	poppy->name = malloc(sizeof(char) * (new_name + 1));
	if (poppy->name == NULL)
	{
		free(poppy);
		return (NULL);
	}

	poppy->owner = malloc(sizeof(char) * (new_owner + 1));
	if (poppy->owner == NULL)
	{
		free(poppy);
		free(poppy->name);
		return (NULL);
	}
	_strcpy(poppy->name, name);
	_strcpy(poppy->owner, owner);
	poppy->age = age;

	return (poppy);
}
