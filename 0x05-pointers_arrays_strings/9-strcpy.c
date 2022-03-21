#include "main.h"

/**
 * *_stropy - copies the string pointed to by src, including \0
 * @src: pointer
 * @dest: pointer
 * Return: the pointer to dest
 */

char *_stropy(char *dest, char *src)
{
	int i, length;

	for (length = 0; src[length] != '\0'; length++)
	{
	}

	for (i = 0; i <= length; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
