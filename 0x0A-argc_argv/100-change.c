#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - change
 * @argc: number of arguments
 * @argv: array name
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, coins, cents, denom;
	int denominations[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	coins = 0;
	denom = sizeof(denominations) / sizeof(denominations[0]);

	for (i = 0; i < denom; i++)
	{
		coins += cents / denominations[i];
		cents %= denominations[i];
	}

	printf("%d\n", coins);
	return (0);
}
