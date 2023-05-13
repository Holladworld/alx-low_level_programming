#include "main.h"

/**
 * strlen_no_wild - Returns the length of a string, ignoring
 * wildcard characters.
 * @str: String to be measured.
 * Return: string length.
 */

int strlen_no_wild(char *str)
{
	int length = 0, index = 0;

	if ((*str + index))
	{
		if (*str != '*')
			length++;
		index++;
		length += strlen_no_wild(str + index);
	}
	return (length);
}

/**
 * iterate_wild - iterate through a string on a wildcard
 * until it points to a non-wildcard character.
 * @wild_str: string to be iterated through.
 */

void iterate_wild(char **wild_str)
{
	if (**wild_str == '*')
	{
		(*wild_str)++;
		iterate_wild(wild_str);
	}
}

/**
 * matched_postfix -check if str matches the postfix of another
 * string to be matched.
 * @str: the string to be matched
 * @postfix: the postfix.
 * Return: if str and postfix are identical - a
 * pointer to the null bytes located at the end of the postfix
 * otherwise - a pointer to the first unmatched character
 */

char *matched_postfix(char *str, char *postfix)
{
	int str_length = strlen_no_wild(str) - 1;
	int postfix_length = strlen_no_wild(postfix) - 1;

	if (*postfix == '*')
		iterate_wild(&postfix);
	if (*(str + str_length - postfix_length) == *postfix && *postfix != '\0')
	{
		postfix++;
		return (matched_postfix(str, postfix));
}
return (postfix);
}

/**
 * wildcmp - compares two string, considering wildcard characters.
 * @s2: the second string to be compared ( may have wildcards).
 * @s1: the first string to be compared.
 * Return: 1 if the strings can be identical and 0 if otherwise.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		iterate_wild(&s2);
		s2 = matched_postfix(s1, s2);
	}
	if (*s1 != *s2)
		return (0);
	return (wildcmp(++s1, ++s2));
}
