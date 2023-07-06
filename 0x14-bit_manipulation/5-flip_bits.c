#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to flip
 * to get from one number to another
 * @n: First digit
 * @m: Second digit
 * 
 * Return: Number of bits needed to flip
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned long int p = n ^ m;
    unsigned int index = 0;

    while (p)
    {
        index = index + (p & 1);
        p >>= 1;
    }

    return (index);
}