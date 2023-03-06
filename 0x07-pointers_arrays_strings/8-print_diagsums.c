#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of two diagonals of a square matrix of integers
 * @a: matrix of integers
 * @size: size of the matrix
 *
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int i, j;

	for (i = 0; a[i][7]; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
