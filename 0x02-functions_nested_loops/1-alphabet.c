#include "main.h"

/**
 * print_alphabet - this prints a - z
 * 
 * Return: Always 0.
 */

int print_alphabet(void)
{
	char c = 'a';
	
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
	
	return (0);
}
