#include "main.h"

int check_palindrome(char *s, int len, int a);
int is_palindrome(char *s);
int is_strlen(char *s);

/**
 * is_strlen - Return the length of a string.
 * @s: the string to be measured.
 * Return: string length.
 */
int is_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += is_strlen(s + len);
	}
	return (len);
}

/**
 * check_palindrome - check if a string is palindrome
 * @s: string to be measured or calculated
 * @a: string to be checked
 * @len: length of s.
 * Return: 1 if string palindrome, 0 if not
 */
int check_palindrome(char *s, int len, int a)
{
	if (s[a] == s[len / 2])
	return (1);

	if (s[a] == s[len - a - 1])
	return (check_palindrome(s, len, a + 1));
	return (0);
}

/**
 * is_palindrome - check if a string is palindrome
 * @s: the string to be measured.
 *
 * Return: 0
 */
int is_palindrome(char *s)
{
	int a = 0;
	int len = is_strlen(s);

	if (!(*s))
		return (1);
	return (check_palindrome(s, len, a));
}
