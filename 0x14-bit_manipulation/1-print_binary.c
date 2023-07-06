#include "main.h"

/**
 * power - Calculates base and power
 * @base: The base of the exponent
 * @power: The power
 *
 * Return: value of base power
*/

unsigned long int power(unsigned int base, unsigned int power)
{
    unsigned long int num = 1;
    unsigned int i;

    for (i = 1; i <= power; i++)
    num *= base;

    return (num);
}

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to be printed
*/

void print_binary(unsigned long int n)
{
    unsigned long int result, devo;
    char fl = 0;

    devo = power(2, sizeof(unsigned long int) * 8 - 1);

    while (devo != 0)
    {
        result = n & devo;
        if (result == devo)
        {
            fl = 1;
            _putchar('1');
        }

        else if (fl == 1 && devo == 1)
        _putchar('0');

        devo >>= 1;
    }
}
