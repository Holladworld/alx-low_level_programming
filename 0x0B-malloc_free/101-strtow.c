#include "main.h"
/**
 * CountGrid - helper function to count word
 * @grid: string to count
 * Return: number of word
 *
 */
int CountGrid(char *grid)
{
	int f, count, word = 0;

	f = 0;
	count = 0;

	for (count = 0; grid[count] != '\0'; count++)
	{
		if (grid[count] == ' ')
			f = 0;
		else if (f == 0)
		{
			f = 1;
			word++;
		}
	}
	return (word);
}


/**
 * strtow - splits string into word
 * @str: string
 * Return: pointer
 */
char **strtow(char *str)
{
	char **Array, *dest;
	int s;
     	int k = 0, size = 0, word = 0, x = 0,  y, z;

	while (*(str + size))
		size++;
	word = CountGrid(str);
	if (word == 0)
	{
		return (NULL);
	}

	Array = (char **) malloc(sizeof(char *) * (word + 1));
	if (!Array)
	{
		return (NULL);
	}
	for (s = 0; s <= size; s++)
	{
		if (str[s] == ' ' || str[s] == '\0')
		{
			if (x)
			{
				z = s;
				dest = (char *) malloc(sizeof(char) * (s + 1));
				if (dest == NULL)
				{
					return (NULL);
				}
				while (y < z)
					*dest++ = str[y++];
				*dest = '\0';
				Array[k] = dest - x;
				k++;
				x = 0;
			}
		}
		else if (s++ == 0)
			y = s;
	}
	Array[k] = NULL;
	return (Array);
}
