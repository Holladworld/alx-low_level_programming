#include "main.h"

/**
 * create_file - program that create a file
 * @filename: location of file to create
 * @text_content: content to be sent to file
 * Return: -1 if error, 1 if success
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t input;
	ssize_t fwrite;
	int file;

	if (filename == NULL)
	{
		return (-1);
	}
	for (input = 0; text_content && text_content[input]; input++)
		;
	file = open(filename, O_CREAT | O_TRUNC | O_WRONLY, S_IRUSR | S_IWUSR);
	if (file == -1)
	{
		return (-1);
	}
	if (input)
	{
		fwrite = write(file, text_content, input);
	}
	if (fwrite == -1)
	{
		return (-1);
	}
	close(file);
	return (1);

}
