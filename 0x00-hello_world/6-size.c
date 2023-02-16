#include <stdio.h>

/**
 * main - A program that prints the various types of sizes
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	double d;
	char c;

	printf("The size of an int is: %lu.\n", (unsigned long)sizeof(i));
	printf("The size of a double is: %lu.\n", (unsigned long)sizeof(d));
	printf("The suze of a char is: %lu.\n", (unsigned long)sizeof(c));
	return (0);
}
