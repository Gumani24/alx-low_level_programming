#include "main.h"

/**
 * flip_bits - returns the number of bits flip required
 * to get to another number from another number.
 * @n: number 1
 * @m: number 2
 * Return: number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{ int i, cnt = 0;
	unsigned long int cur;
	unsigned long int special = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		cur = special >> i;
		if (cur & 1)
			cnt++;
	}
return (cnt);
}
