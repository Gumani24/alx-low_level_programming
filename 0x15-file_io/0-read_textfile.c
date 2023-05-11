#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads the textfile and prints it to STDOUT.
 * @filename: textfile to read.
 * @letters: is the number of letters to be read.
 * Return: 0 if ile can't be read or if filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *gums;
ssize_t op;
ssize_t w;
ssize_t r;

op = open(filename, O_RDONLY);
if (op == -1)
	return (0);
gums = malloc(sizeof(char) * letters);
r = read(op, gums, letters);
w = write(STDOUT_FILENO, gums, r);

free(gums);
close(op);
return (w);
}
