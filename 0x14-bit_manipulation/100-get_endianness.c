#include "main.h"

/**
 * get_endianness - Checks the endianness
 *
 * Return: 0 if big endian, 1 if small endian
*/

int get_endianness(void)
{
    unsigned int digit = 1;
    char *data = (char *)&digit;

    if (*data)
    return (1);

    else
    return (0);
}
