#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of integers to be reversed
 * @n: number of elements in the array
 *
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int tmp, i;

	for (i = 0; i < n / 2; i++)
	{
		tmp = *(a + 1);
		*(a + 1) = *(a + n - i - 1);
		*(a + n - i - 1) = tmp;
	}
}
