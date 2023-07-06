#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given point
 * @n: Pointer to the number to be changed
 * @index: The index, starting from 0 of the number to be changed
 *
 * Return: -1 upon error or 1 if it works
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
    unsigned long int rex;

    if (index >= sizeof(unsigned long int) * 8)
    return (-1);

    rex = ~(1 << index);
    *n &= rex;

    return (1);
}
