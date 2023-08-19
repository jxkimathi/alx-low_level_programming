#include "main.h"

/**
 * file_error - Checks if files can be opened
 * @file_from: From which file
 * @file_to: To which file
 * @argv: The argument vector
 *
 * Return: void
*/

void file_error(int file_from, int file_to, char *argv[])
{
    if (file_from == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit (98);
    }

    if (file_to == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
        exit (99);
    }
}

/**
 * main - Checks the code
 * @argc: The number of arguments
 * @argv: The argument vector
 *
 * Return: Always 0
*/

int main(int argc, char *argv[])
{
    int file_from, file_to, close_error;
    ssize_t chars, wr;
    char buffer[1024];

    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
        exit (97);
    }

    file_from = open(argv[1], O_RDONLY);
    file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);

    file_error(file_from, file_to, argv);

    chars = 1024;

    while (chars == 1024)
    {
        chars = read(file_from, buffer, 1024);

        if (chars == -1)
        file_error(-1, 0, argv);

        wr = write(file_to, buffer, chars);

        if (wr == -1)
        file_error(0, -1, argv);
    }

    close_error = close(file_from);

    if (close_error == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
        exit (100);
    }

    close_error = close(file_to);

    if (close_error == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
        exit (100);
    }

    return (0);
}