#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: Pointer to the number to be changed
 * @index: The index, starting from 0 of the number you wish to change
 * 
 * Return: 1 if it works and -1 if an error occurs
*/

int set_bit(unsigned long int *n, unsigned int index)
{
    if (index >= sizeof(unsigned long int) * 8)
    return (-1);

    *n |= (1 << index);

    return (1);
}