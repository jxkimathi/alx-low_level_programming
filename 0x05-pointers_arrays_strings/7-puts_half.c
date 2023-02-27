#include "main.h"

/**
 * puts_half - prints the second half of the string
 * @str: string to be printed
 *
 * Return: Always 0
 */
void puts_half(char *str)
{
	int j, i = 0;

	while (*(str + i))
	{
		i++;
	}
	j = i / 2;
	if (i % 2)
	{
		j += 1;
	}
	while (j < 1)
	{
		_putchar(*(str + j));
		j++;
	}

	_putchar('\n');
}
