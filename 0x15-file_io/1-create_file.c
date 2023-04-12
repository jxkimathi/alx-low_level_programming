#include "main.h"

/**
 * create_file - Creates a file
 * @filename: Pointer to the name of the file
 * @text_content: Pointer to the string to write to file
 *
 * Return: -1 if function fails
 * Otherwise return 1
 */

int create_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; tex_content[len];)
			len++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
