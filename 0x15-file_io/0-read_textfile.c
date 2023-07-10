#include "main.h"

/**
 * read_textfile - functon to read file and print it to stdout
 * @filename: where filename is
 * @letters: numbers and letter to read and write
 * Return: 0 if filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t Read, Write;
	char *size = malloc(sizeof(char) * letters);
	int file;

	if (filename == NULL)
	{
		return (0);
	}
	if (size == NULL)
	{
		return (0);
	}
	file = open(filename, O_RDWR);
	if (file == -1)
	{
		free(size);
		return (0);
	}
	Read = read(file, size, letters);
	if (Read == -1)
	{
		free(size);
		close(file);
		return (0);
	}
	close(file);
	Write = write(STDOUT_FILENO, size, Read);
	if (Write == -1)
	{
		free(size);
		return (0);
	}
	if (Write != Read)

		return (0);

	return (Read);
}
