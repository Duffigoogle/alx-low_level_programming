#include "main.h"

/**
 * main - program that copies the content of a file to another file.
 * Usage: cp file_from file_to.
 * @argc: arg count.
 * @argv: arguments.
 * Return: if the number of argument is not the correct one,
 * exit with code 97 and print Usage: cp file_from file_to,
 * followed by a new line, on the POSIX standard error.
 *
 * if file_to already exists, truncate it.
 */
int main(int argc, char **argv)
{
	int _file_from, _file_to, _read, _write, len = 0;
	char *buffer = malloc(1024);

	if (argc != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}

	if (argv[1] == NULL)
	{
		exit(98);
	}

	_file_from = open(argv[1], O_RDONLY);
	if (_file_from == -1)
	{
		return (98);
	}

	return (0);
}
