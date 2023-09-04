#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: A NULL-terminated string to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
    int file_descriptor, write_result;
    
    if (filename == NULL)
        return (-1);

    /* Open the file in append mode and create if it doesn't exist*/
    file_descriptor = open(filename, O_WRONLY | O_APPEND | O_CREAT, 0600);
    if (file_descriptor == -1)
        return (-1);

    if (text_content != NULL)
    {
        /* Write the text content to the end of the file*/
        write_result = write(file_descriptor, text_content, strlen(text_content));
        if (write_result == -1)
        {
            close(file_descriptor);
            return (-1);
        }
    }

    /*Close the file and return success*/
    close(file_descriptor);
    return (1);
}
