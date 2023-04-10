#include "main.h"

/**
 * set_bit - This sets the value of a bit to 1 at given index.
 * @n: points the number to be changed.
 * @index: inex of bit to set to 1.
 * Return: 1 if success, -1 if an error occured.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);


	*n = ((1UL << index) | *n);
return (1);
}
