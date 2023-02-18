#include <stdio.h>

/**
 * main - Combinations of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, k;

	for (i = 0; i <= 8; i++)
	{
		for (k = i + 1; k < 10; k++)
		{
			putchar('0' + i);
			putchar('0' + k);
			if (i < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
