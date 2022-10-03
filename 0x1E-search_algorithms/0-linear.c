#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * linear_search - function that searches for a value in an array of
 * integers using the Linear search algorithm
 * @array: array to search the value in
 * @size: size of the array(no. of elements in array).
 * @value: value to search for.
 *
 * Return: the index of the found value,
 * or -1 if not found or if array is NULL
 *
 * gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-linear.c -o 0-linear
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (!array || size == 0)
		return (-1);

	while (index < size)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
		index++;
	}

	return (-1);
}
