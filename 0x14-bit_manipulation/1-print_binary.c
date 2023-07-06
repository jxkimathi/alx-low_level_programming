#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to be printed
*/

void print_binary(unsigned long int n)
{
    int index;

    while ((n >> index) > 1)
    index++;

    while (index >= 0)
    {
        if ((n >> index) & 1)
        _putchar('1');

        else
        _putchar('0');

        index--;
    }
}