#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: is the name of the file.
 * @text_content: is the NULL terminated string to add.
 * Return: 1 on success and -1 on failure.
 * If filename is NULL return -1.
 * If text_content is NULL, do not add anything to the file.
 * Return 1 if the file exists and -1 if the file does not
 * exist or if you do not have the required
 * permissions to write the file.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int _file, _write, len = 0;

	if (!filename)
		return (-1);

	_file = open(filename, O_WRONLY | O_APPEND);
	if (_file == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	if (text_content)
		_write = write(_file, text_content, len);

	if (_write != len)
	{
		close(_file);
		return (-1);
	}

	close(_file);
	return (1);
}
