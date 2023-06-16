#include "main.h"

/**
 * _strlen - function that gets string length
 * @string: string
 * Return: length of string
 */
int _strlen(char *string)
{
	int length;

	for (length = 0; string[length] != '\0'; length++)
		;
	return (length);

}
/**
 * string_nconcat - function that concatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: integer that checks if s2 will be used
 * Return: pointer to be concatenated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pointer;
	int num1, num2, numc, i;

	num1 = n;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (num1 < 0)
	{
		return (NULL);
	}
	if (num1 >= _strlen(s2))
	{
		num1 = _strlen(s2);
	}


	num2 = _strlen(s1) + num1 + 1;
	pointer = malloc(sizeof(*pointer) * num2);

	if (pointer == NULL)
	{
		return (NULL);
	}
	for (numc = 0; s1[numc] != '\0'; numc++)
		pointer[numc] = s1[numc];
	for (i = 0; i < num1; i++)
		pointer[numc + i] = s2[i];
	pointer[numc + i] = '\0';

	return (pointer);
}


