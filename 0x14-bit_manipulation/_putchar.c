#include "main.h"
#include <unistd.h>

/**
 * _putchar - will write character c to stdout.
 * @c: c is the character to print.
 * Return: 1 on success.
 * if error, -1 is returned.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
