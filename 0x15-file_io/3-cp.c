#include "main.h"

/**
 * error_checker - Detect error in file
 * @r: file to read
 * @w: file to write
 * @file_frm: file to check from
 * @file_to: file to
 * Return: void
 */
void error_checker(int r, int w, char *file_frm, char *file_to)
{
	char buff[BYTES];
	ssize_t Read, Write;

	do {
		Read = read(r, buff, BYTES);

		if (Read == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't read from file %s\n", file_frm);
			exit(98);
		}
		if (Read)
		{
			Write = write(w, buff, Read);
			if (Write != Read)
			{
				dprintf(STDERR_FILENO, "Error: can't write to %s\n", file_to);
				exit(99);
			}
		}
	} while (Read);
}
/**
 * main - check the code and content into another file
 * @argv: argument vector or array
 * @argc: argument count
 * Return: EXIT_SUCCES
 */

int main(int argc, char *argv[])
{
	char *file_frm = argv[1];
	char *file_to = argv[2];
	int Write, Read;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_frm file_to\n");
		exit(97);
	}

	Read = open(file_frm, O_RDONLY);
	if (Read == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", file_frm);
		exit(98);
	}
	Write = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	error_checker(Read, Write, file_frm, file_to);

	if (Write == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", file_to);
		exit(99);
	}
	if (close(Write))
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", Read);
		exit(100);
	}
	exit(EXIT_SUCCESS);
}
