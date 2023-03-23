#include "variadic_functions.h"

/**
 * print_strings - A function that prints strings, followed by a new line
 * @seperator: The string to be printed between strings
 * @n: The number of strings passed by the function
 *
 * Return: nil if string == NULL
 * nothing if seperator == NULL
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int index;
	va_list ap;

	va_start(ap, n);

	if (separator == NULL)
		separator = "";

	for (index = 0; index < n; index++)
	{
		str = va_arg(ap, char*);

		if (str == NULL)
			str = "(nil)";

		printf("%s", str);

		if (index < n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(ap);
}
