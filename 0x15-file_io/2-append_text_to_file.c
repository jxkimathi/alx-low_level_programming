#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: The name of the filename
 * @text_content: String to add at the end of file
 *
 * Return: 1 on success, -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
    int fptr;
    int letters;
    int rwr;

    if (filename == NULL)
    return (-1);

    fptr = open(filename, O_WRONLY, O_APPEND);

    if(fptr == -1)
    return (-1);

    if (text_content)
    {
        for (letters = 0; text_content[letters]; letters++)
        ;

        rwr = write(fptr, text_content, letters);

        if (rwr == -1)
        return (-1);
    }

    close(fptr);

    return (1);
}