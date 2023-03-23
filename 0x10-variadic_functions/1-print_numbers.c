#include "variadic_functions.h"

/**
 * print_numbers - A function that prints numbers, followed by a new line
 * @seperator: The string to be printed between numbers
 * @n: The number of integers passed
 *
 * Return: "" if seperator == NULL
 * Otherwise return the numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	va_list ap;

	va_start(ap, n)

	if (seperator == NULL)
		seperator = "";

	for (index = 0; index < n; index++)
	{
		printf("%d\n", va_arg(ap, int));
		
		if (index < n - 1)
			printf("%s\n", va_arg(ap, int));
	}

	va_end(ap);
}
