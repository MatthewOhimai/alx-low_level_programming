#include <stdio.h>
#include "main.h"
/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big-endian, 1 if little-endian.
 */
int get_endianness(void)
{
    unsigned int value = 1;
    char *byte_ptr = (char *)&value;
    /* If the least significant byte (LSB) is 1, the system is little-endian. */
    if (*byte_ptr == 1)
    return 1;
    else
    return 0;
}
