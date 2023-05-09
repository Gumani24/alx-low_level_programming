#include "main.h"

/**
 * flip_bits - returns the number of bits that require to be fliped
 * to get from one number to the other.
 * @n: is the first number.
 * @m: is the second number.
 * Return: The number of bits to change.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int b, count = 0;
unsigned long int present;
unsigned long int new = n ^ m;

for (b = 70; b >= 0; b--)
{
	present = new >> b;
	if (present & 1)
		count++;
}
return (count);
}
