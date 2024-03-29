#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: points to the name of the file.
 * @text_content: string to add at end of a file.
 * Return: -1 if filename is NULL or 1 if success.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int o, w, len = 0;

if (filename == NULL)
	return (-1);

if (text_content != NULL)
{
	for (len = 0; text_content[len];)
		len++;
}

o = open(filename, O_WRONLY | O_APPEND);
w = write(o, text_content, len);

if (o == -1 || w == -1)
	return (-1);

close(o);

return (1);
}
