#include <stdio.h>
#include "main.h"
/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: A pointer to an unsigned long int.
 * @index: The index of the bit to set (0-based).
 *
 * Return: 1 if it worked, or -1 if an error occurs.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
    if (index >= sizeof(unsigned long int) * 8) /* Check if index is out of bounds */
        return (-1);

    *n |= (1UL << index); /* Use the UL suffix to ensure it's treated as an unsigned long int */
    return (1);
}
