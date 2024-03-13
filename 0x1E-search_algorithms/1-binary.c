#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 *					using the Binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: First index where value is located
 * Otherwise return -1 if array == NULL or no value present
*/

int binary_search(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t r = size - 1;

	if (array == NULL)
		return (-1);

	while (l <= r)
	{
		size_t i, m;

		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			printf("%d", array[i]);

			if (i == r)
			{
				printf("\n");
				break;
			}
			printf(", ");
		}
		m = (l + r) / 2;

		if (value == array[m])
		{
			return (m);
		}
		else if (value < array[m])
		{
			r = m - 1;
		}
		else
		{
			l = m + 1;
		}
	}
	return (-1);
}

