#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to stdout
 * @filename: Pointer to name of file
 * @letters: Number of letters to be read and printed
 *
 * Return: 0 if function fails or if filename is NULL
 * Otherwise the number of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r, w, o;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}
