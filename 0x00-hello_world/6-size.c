#include <stdio.h>

/**
 * main - A program printing various sizes
 * Return: 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int y;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(y));
	printf("Size of a float: %ly byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
