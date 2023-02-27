#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: first integer to be swapped
 * @b: second integer to be swapped
 *
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int dar;
	dar = *a;
	*a = *b;
	*b = dar;
}
