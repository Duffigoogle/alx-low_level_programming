#include "main.h"

/**
 * print_triangle - check for a digit
 * @size: integer(size x size) type
 * Return: void
 */

void print_triangle(int size)
{
	while (int i <= size && size > 0)
	{
		int ii = 0;

		while (ii < size - i)
		{
			_putchar(' ');
			ii++;
		}
		ii = 0;
		while (ii < i)
		{
			_putchar('#');
			ii++;
		}
		_putchar('\n');
		i++;
	}
	if (i == 1)
		_putchar('\n');
}
