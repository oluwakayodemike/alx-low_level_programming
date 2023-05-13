#include <stdio.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 *               using the Jump search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	int jump = sqrt(size);
	int start = 0;
	int end = jump - 1;

	if (array == NULL || size == 0)
		return (-1);

	while (end < (int)size)
	{
		if (array[end] >= value)
			break;

		printf("Value checked array[%d] = [%d]\n", end, array[end]);
		start = end;
		end += jump;
	}

	printf("Value found between indexes [%d] and [%d]\n", start, end);

	if (end > (int)size - 1)
		end = size - 1;

	for (; start <= end; start++)
	{
		printf("Value checked array[%d] = [%d]\n", start, array[start]);
		if (array[start] == value)
			return (start);
	}

	return (-1);
}

