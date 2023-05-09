#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: is the number to search.
 * @index: is the index of a bit.
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int b_val;

	if (index > 63)
		return (-1);

	b_val = (n >> index) & 1;

	return (b_val);
}
