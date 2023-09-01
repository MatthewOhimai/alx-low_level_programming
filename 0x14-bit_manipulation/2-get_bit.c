#include <stdio.h>
#include "main.h"
/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: The unsigned long int.
 * @index: The index of the bit to get (0-based).
 *
 * Return: The value of the bit at the given index, or -1 if an error occurs.
 */
int get_bit(unsigned long int n, unsigned int index)
{
    if (index >= sizeof(unsigned long int) * 8) /* Check if index is out of bounds */
        return (-1);
    return ((n >> index) & 1);
}
