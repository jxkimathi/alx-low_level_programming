#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: The name of the file
 * @letters: Number of lletters to be printed
 *
 * Return: 0 if !filename; write fails
 * Otherwise return the number of letters
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
    char *buffer;
    ssize_t fd, nread, nwrite;

    if (filename == NULL)
    return (0);

    buffer = malloc(sizeof(char) * letters);

    if (buffer == NULL)
    return (0);

    fd = open(filename, O_RDONLY);

    nread = read(fd, buffer, letters);
    nwrite = write(STDOUT_FILENO, buffer, nread);

    if (fd == -1 || nread == -1 || nwrite == -1)
    {
        free(buffer);
        return (0);
    }

    free(buffer);
    close(fd);

    return (nwrite);
}
