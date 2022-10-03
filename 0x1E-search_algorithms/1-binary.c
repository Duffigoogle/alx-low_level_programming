#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * binary_search - function that searches for a value in an array of
 * integers using the Binary search algorithm
 * @array: array to search the value in
 * @size: size of the array (no. of elements in array).
 * @value: value to search for
 *
 * Return: the index of the found value,
 * or -1 if not found or if array is NULL
 *
 * gcc -Wall -Wextra -Werror -pedantic 1-main.c 1-binary.c -o 1-binary
 */

int binary_search(int *array, size_t size, int value)
{
	int start, end, mid, index;

	if (array == NULL || size < 1)
		return (-1);

	start = 0;
	end = (int)size - 1;

	while (start <= end)
	{
		for (index = start; index <= end; index++)
		{
			if (index == start)
				printf("Searching in array: ");
			printf("%d", array[index]);
			if (index != end)
				printf(", ");
		}
		printf("\n");

		mid = (start + end) / 2;

		if (array[mid] < value)
			start = mid + 1;
		else if (array[mid] > value)
			end = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
