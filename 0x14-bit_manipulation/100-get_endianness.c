#include "main.h"

/**
 * get_endianness - This checks the endianness.
 * Return: 0 for big endiane and 1 for little endiane.
 */
int get_endianness(void)
{
unsigned int b = 1;
char *c = (char *) &b;

return (*c);
}
