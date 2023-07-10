#include "main.h"

/**
 * error_checker - Detect error in file
 * @file_frm: file to check from
 * @file_to: file to
 * @argv: argument vector
 * Return: void
 */
void error_checker(int file_frm, int file_to, char *argv[])
{
	if (file_frm == -1)
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
	exit(98);

	if (file_to == -1)

		dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
	exit(99);
}
/**
 * main - check the code and content into another file
 * @argv: argument vector or array
 * @argc: argument count
 * Return: EXIT_SUCCES
 */

int main(int argc, char *argv[])
{
	int file_frm, file_to, ERR;
	char buff[NBYTES];
	ssize_t fdw = NBYTES, fdr;

	if (argc != 3)
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_frm file_to");
			exit(97);

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	file_frm = open(argv[1], O_RDONLY);

	error_checker(file_frm, file_to, argv);

	while (fdw == NBYTES)
	{
		fdw = read(file_frm, buff, NBYTES);
		if (fdw == -1)
			error_checker(-1, 0, argv);
		fdr = write(file_to, buff, fdw);
		if (fdr == -1)
			error_checker(0, -1, argv);
	}
	ERR = close(file_frm);
	if (ERR == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", file_frm);
		exit(100);
	}
	ERR = close(file_to);
	if (ERR == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", file_frm);
		exit(100);
	}
	return (0);
}
