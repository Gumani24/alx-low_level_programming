#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - This reads text file
 * and prints it to standard output (stdout).
 * @filename: name of textfile being read.
 * @letters: number of letters to be read and printed.
 * Return: the actual number of letters it could read and print
 * or if function fails or filename is NULL, return 0.
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
w = write(STDOUT_FILENO, gums, r);
r = read(op, gums, letters);

free(gums);
close(op);
return (w);
}
