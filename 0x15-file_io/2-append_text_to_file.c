#include "main.h"

/**
 * append_text_to_file - Appends text at end of file
 * @filename: Pointer to name of file
 * @text_content: String to add at end of file
 *
 * Return: -1 if function fails or filename is NULL
 * Otherwise 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int w, o, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, length);

	if (o == -1 || w == -1)
		return (-1);

	close (o);

	return (1);
}
