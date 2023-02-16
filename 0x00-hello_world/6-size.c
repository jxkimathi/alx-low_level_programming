#include <stdio.h>

/**
 * main - Program printing various sizes
 * Return: 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int y;
	float f;

	printf("The size of a char is: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("The size of an int is: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("The size of a long int is: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("The size of a long long int is: %lu byte(s)\n", (unsigned long)sizeof(y));
        printf("The size of a float is: %ly byte(s)\n", (unsigned long)sizeof(f));
        return (0);
}	
