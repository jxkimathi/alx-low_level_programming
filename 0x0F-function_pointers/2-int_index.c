#include "function_pointers.h"

/**
 * int_index - A function that searches for an integer
 * @array: The array to be searched
 * @size: Number of elements in the array
 * @cmp: A pointer to the function
 *
 * Return: -1 if size <= 0 or if no element is returned
 * Otherwise return a pointer
 */

int int_index(int *array, int size, int(*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return index;
	}
	
	return (-1);
}
