#include "main.h"
/**
 * print_diagonal - prints diagonal
 * @n: integer to set diagonal
 * Return: always void
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
