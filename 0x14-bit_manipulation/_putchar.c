#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout.
 * @c: is the character to print.
 * Return: 1 if success or -1 if error
 * and erno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
