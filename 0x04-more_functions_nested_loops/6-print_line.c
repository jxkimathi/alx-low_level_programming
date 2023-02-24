#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: Character to be acted on
 *
 * Return: int
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	
	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
