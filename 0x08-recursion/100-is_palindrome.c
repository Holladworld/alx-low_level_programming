#include "main.h"

/**
 * string_length - check length of string
 * @s: string to be checked
 * Return: length of string
 */
int string_length(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	else
	{
	return (1 + string_length(++s));
	}
}
/**
 * recursive - recursive check of palindrome
 * @s: string checked
 * @len: length of the string
 * Return: 0 if not palindrome
 */
int recursive(char *s, int len)
{
	if (len <= 0)
	{
		return (1);
	}
	else if (*s == *(s + len))
	{
		return (recursive(++s, len - 2));
	}
	else
	{
		return (0);
	}
}
/**
 * is_palindrome - function to check if string is palindrome
 * @s: pointer to string
 * Return: recursion
 */
int is_palindrome(char *s)
{
	int len = string_length(s) - 1;

	return (recursive(s, len - 1));
}
