#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: Character to be converted
 * 
 * Return: 0 if b == NULL or b != 1 or b != 0;
 * otherwise return the digit
*/

unsigned int binary_to_uint(const char *b)
{
    unsigned int index = 0;
    unsigned int digit = 0;

    if (b == NULL)
    return (0);

    while (b[index] != '0' && b[index] != '1')
    {
        return (0);
        index++;
    }

    index = 0;
    
    while (b[index] != NULL)
    {
        digit <<= 1;
        if (b[index] == '1')
        digit = digit + 1;

        index++;
    }

    return (digit);
}