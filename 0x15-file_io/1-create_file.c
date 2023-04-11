#include "main.h"

/**
 * create_file - This creates a file.
 * @filename: is the name of the file to create.
 * @text_content: is the terminated string to write to the file.
 * Return: 1 if success, -1 if the function fails.
 */
int create_file(const char *filename, char *text_content)
{
int op, w, p = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		{
			for (p = 0; text_content[p];)
			p++;
		}
op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
w = write(op, text_content, p);

	if (op == -1 || w == -1)
		return (-1);

close(op);

return (1);
}
