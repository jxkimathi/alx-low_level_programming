#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the result of multiplication
 * @argc: number of arguments
 * @argv: array name
 * Return: 0 if success;
 * else 1 and print error
 */

int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		j = 1;

		for (i = 1; i < 3; i++)
		j *= atoi(argv[i]);

		printf("%d\n", j);
	}

	return (0);
}
