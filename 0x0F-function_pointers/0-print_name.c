#include "function_pointers.h"

/**
 * print_name - A function that prints a name
 * @name: Name to be printed
 * @f: A pointer to a function that prints a name
 */

void print_name(char *name, void(*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
