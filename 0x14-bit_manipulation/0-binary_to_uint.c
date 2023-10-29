#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b) {
    unsigned int result = 0;

    if (b != 0)
        return 0;

    while (*b) 
    {
        if (*b == '0' || *b == '1') 
        {
            result = (result << 1) | (*b - '0');
            b++;
        } 
        else
            return 0; 
    }
    return result;
}
