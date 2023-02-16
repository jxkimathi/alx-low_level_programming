#include <stdio.h>

/**
 * main - A program that prints the various types of sizes
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	char c;
	long int l;
	long long int x;
	float f;

	printf("The size of an int is: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("The size of a long int is: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("The size of a char is: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("The size of a long long int is: %lu byte(s)\n", (unsigned long)sizeof(x));
	printf("The size of a float is: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
