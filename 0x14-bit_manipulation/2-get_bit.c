#include "main.h"

/**
 * get_bit - This will return the value if a bit at a given index.
 * @n: Is the number to search.
 * @index: is the index of the bit.
 * Return: The value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{int value;

	if (index > 63)
		return (-1);
	value = (n >> index) & 1;

return (value);
}
