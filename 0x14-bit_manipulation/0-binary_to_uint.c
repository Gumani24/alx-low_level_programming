#include "main.h"

/**
 * binary_to_unit - will convert a binary number to unsigned int.
 * @b: points to a string containing the binary numbers (0 and 1).
 * Return: the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int val = 0;

if (!b)
	return (0);

for (i = 0; b[i]; i++)
{
	if (b[i] < '0' || b[i] > '1')
		return (0);
	val = 2 * val + (b[i] - '0');
}
return (val);
}
