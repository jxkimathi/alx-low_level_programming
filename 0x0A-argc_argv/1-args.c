#include "main.h"
#include <stdio.h>

/**
 * main - prints number of arguments passed
 * @argc: number of arguments
 * @argv: array name
 * Return (0);
 */

int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
