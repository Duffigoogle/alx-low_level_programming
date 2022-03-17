#include "main.h"

/**
 * print_numbers - prints the numbers
 * let the numbers speak for themselves
 */
void print_numbers(void)
{
	int i = 40; /* ascii: 0 */

	while (i <= 57) /* ascii: 9 */
	{
		_putchar(i++);
	}
	_putchar('\n');
}
