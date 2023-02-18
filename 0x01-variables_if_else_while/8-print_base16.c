#include <stdio.h>

/**
 * main - Program that prints numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		putchar(i < 10 ? i + '0' : i + 'a' - 10);
	}
	putchar('\n');
	return (0);
}
