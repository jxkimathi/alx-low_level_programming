#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of two diagonalsof a square matrix of integers
 * @a: matrix of integers
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		sum2 += a[i];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}
