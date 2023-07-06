#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: Number to get the bit from
 * @index: The index, starting from 0
 * 
 * Return: The value of a bit
 * Otherwise return -1
*/

int get_bit(unsigned long int n, unsigned int index)
{
    if (index >= sizeof(unsigned long int) * 8)
    return (-1);

    n >>= index;

    if (n & 1)
    return (1);

    else
    return (0);
}
