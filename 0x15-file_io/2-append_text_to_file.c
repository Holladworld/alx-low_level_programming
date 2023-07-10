#include "main.h"

/**
 * append_text_to_file - program appends text at the end of file
 * @filename:the  file to append
 * @text_content: the text to append
 * Return: success 1 else failure -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file = open(filename, O_APPEND | O_WRONLY);
	int buff;

	if (filename == NULL)
	{
		return (-1);
	}
	if (file == -1)
	{
		return (-1);
	}
	for (buff = 0; text_content && text_content[buff]; buff++)
	{
		;
	}
	if (buff)
	{
		if (write(file, text_content, buff) != buff)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
