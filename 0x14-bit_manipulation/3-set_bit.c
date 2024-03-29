#include "main.h"

/**
 * set_bit - sets the value of a bit to 1
 * @n: pointer to the number to be changed.
 * @index: is the index of the bit to set to 1.
 * Return: 1 if success or -1 if failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
	return (-1);

*n = ((1UL << index) | *n);
return (1);
}
