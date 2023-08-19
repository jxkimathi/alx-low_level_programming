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
    int i;
    unsigned int j;

    j = 0;
    if (!b)
    return (0);

    for (i = 0; b[i] != '\0'; i++)
    {
        if (b[i] != '0' && b[i] != '1')
        return (0);
    }

    for (i = 0; b[i] != '\0'; i++)
    {
        j <<= 1;
        if (b[i] == '1')
        j += 1;
    }

<<<<<<< HEAD
    return (digit);
=======
    return (j);
>>>>>>> 26d3a73fdd3204dddffb0ef5beda2c4920b3107e
}
