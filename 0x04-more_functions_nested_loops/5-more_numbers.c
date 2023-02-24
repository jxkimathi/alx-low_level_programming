#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int i, j, tens, unit;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			tens = j / 10;
			unit = j % 10;
			if (j >= 10)
			{
				_putchar(tens + '0');
			}
			_putchar(unit + '0');
		}
		_putchar('\n');
	}
}