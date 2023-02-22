#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @c: number to be treated
 *
 * Return: value of last digit of number
 */
int print_last_digit(int c)
{
	int lst = c % 10;

	if (c < 0)
	{
		lst = lst * -1;
	}
	_putchar(lst + '0');
	return (lst);
}
