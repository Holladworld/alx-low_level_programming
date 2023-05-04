#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @strng: The string to be capitalized.
 * Return: A pointer to the changed string.
 */

char *cap_string(char *strng)
{
	int index = 0;

	while (strng[index])
	{
		while (!(strng[index] >= 'a' && strng[index] <= 'z'))
			index++;

		if (strng[index - 1] == ' ' ||
		    strng[index - 1] == '\t' ||
		    strng[index - 1] == '\n' ||
		    strng[index - 1] == ',' ||
		    strng[index - 1] == ';' ||
		    strng[index - 1] == '.' ||
		    strng[index - 1] == '!' ||
		    strng[index - 1] == '?' ||
		    strng[index - 1] == '"' ||
		    strng[index - 1] == '(' ||
		    strng[index - 1] == ')' ||
		    strng[index - 1] == '{' ||
		    strng[index - 1] == '}' ||
		    index == 0)
			strng[index] -= 32;

		index++;
	}

	return (strng);
}
