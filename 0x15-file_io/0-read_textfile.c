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
    int fptr;
    char *buffer;
    ssize_t nread, nwrite;

    if (filename == NULL)
    return (0);

    fptr = open(filename, O_RDONLY); // opens the file

    if (fptr == -1) // upon failure of opening the file
    return (0);

    buffer = malloc(sizeof(char) * letters); // allocates enough memory in the buffer

    if (buffer == NULL)
    return (0);

    nread = read(fptr, buffer, letters); // read the letters in buffer from the file
    nwrite = write(STDOUT_FILENO, buffer, nread); // write out letters in the stdout

    close(fptr); // closes the file
    free(buffer); // frees the buffer

    return (nwrite);
}
