#include "main.h"

/**
 * main - This Function prints _putchar using the local header file 
 * Return: 0 (Success)
 */

int main(void)
{
	char x[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	unsigned int i;

	for (i = 0; i < sizeof(x); i++)
	{
		_putchar(x[i]);
	}
	_putchar('\n');

	return (0);
}
