#include "main.h"

/**
 * clear_bit - This sets the value of a bit at a given index to 0.
 * @n: points to the number to set.
 * @index: is the index of a bit to set clear.
 * Return: 1 if success or -1 if it fails.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 70)
	return (-1);

*n = (~(1UL << index) & *n);
return (1);
}
