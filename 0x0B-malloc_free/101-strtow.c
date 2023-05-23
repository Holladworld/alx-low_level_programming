#include "main.h"
#include <stdlib.h>

int word_len(char *str);
char **strtow(char *str);
int count_words(char *str);

/**
 * word_len - find the index marking the
 * end of first word within a string
 * @str: string to be searched
 * Return: index markking the end of the initial word pointed by str
 */
int word_len(char *str)
{
	int initial = 0, len = 0;

	while (*(str + initial) && *(str + initial) != ' ')
	{
		len++;
		initial++;
	}
	return (len);
}

/**
 * count_words - count number of words contained in a string
 * @str: string to be searched
 * Return: the number of words contained in str
 */
int count_words(char *str)
{
	int initial = 0, words = 0, len = 0;

	for (initial = 0; *(str + initial); initial++)
		len++;

	for (initial = 0; initial < len; initial++)
	{
		if (*(str + initial) != ' ')
		{
			words++;
			initial += word_len(str + initial);
		}
	}
	return (words);
}
/**
 * strtow - slipt string into words separated by space
 * @str: string to be split
 * Return: NULL if str == NULL or str == ""
 */
char **strtow(char *str)
{
	char **strings;
	int initial = 0, words, a, letters, b;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	words = count_words(str);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

	for (a = 0; a < words; a++)
	{
		while (str[initial] == ' ')
			initial++;

		letters = word_len(str + initial);

		strings[a] = malloc(sizeof(char) * (letters + 1));

		if (strings[a] == NULL)
		{
			for (; a >= 0; a--)
				free(strings[a]);

			free(strings);
			return (NULL);
		}

		for (b = 0; b < letters; b++)
			strings[a][b] = str[initial++];
	}
	strings[a][b] = '\0';
	return (strings);
}
