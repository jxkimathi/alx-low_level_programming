#include "main.h"

/**
 * create_file - Creates a file
 * @filename: Pointer to the name of a file
 * @text_content: Pointer to string to write the file
 *
 * Return: -1 if function fails
 * Otherwise 1
 */

int create_file(const char *filename, char *text_content)
{
	int w, o, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	o = open(filename, O_CREAT | O _RDWR | O_TRUNC, 0600);
	w = write(o, text_content, length);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}

