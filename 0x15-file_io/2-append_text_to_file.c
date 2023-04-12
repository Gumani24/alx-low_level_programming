#include "main.h"

/**
 * append_text_to_file - This appends text at the end of a file.
 * @filename: is the name of the file.
 * @text_content: This is the terminated string
 * to add at the end of the file.
 * Return: 1 if the function is a success and -1 if it fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
int k, w, p = 0;

if (filename == NULL)
	return (-1);

if (text_content != NULL)
{
	for (p = 0; text_content[p];)
	p++;
}
k = open(filename, O_WRONLY | O_APPEND);
w = write(k, text_content, p);

if (k == -1 || w == -1)
	return (-1);

close(k);

return (1);
}
