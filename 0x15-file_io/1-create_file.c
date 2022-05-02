#include "main.h"

/**
 * create_file - creates a file.
 * @filename: name of the file to create.
 * @text_content: is a NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
 * If filename is NULL return -1.
 */
int create_file(const char *filename, char *text_content)
{
	int _file, _write, len = 0;

	if (!filename)
		return (-1);

	_file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (_file == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	_write = write(_file, text_content, len);
	if (_write == -1)
	{
		close(_file);
		return (-1);
	}

	close(_file);
	return (1);

}
