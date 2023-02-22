#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all numbers from n to 98
 * @n: Number to start printing from
 *
 * Return: Always 0
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d\n", i);
		}
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			printf("%d\n", i);
		}
	}
	printf("98\n");
}
