#include "main.h"

/**
 * create_file - Creates a file
 * @filename: The name of the file
 * @text_content: String to write to the file
 *
 * Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
    int fptr;
    int letters;
    int rwr;

    if (filename == NULL)
    return (-1);

    fptr = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

    if (fptr == -1)
    return (-1);

    if (text_content == NULL)
    text_content = "";

    for (letters = 0; text_content[letters]; letters++)
    ;

    rwr = write(fptr, text_content, letters);

    if (rwr == -1)
    return (-1);

    close(fptr);

    return (1);
}