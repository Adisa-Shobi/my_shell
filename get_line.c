#include "main.h"

/**
 * get_line - Gets the users input from the input stream
 * @data: The structure containing basic shell data
 * Return: 1 if successful
 */
 int get_line(sh_data *data)
 {
    char *buffer;
    size_t size = BUFSIZ;
    int read_size = 0;

    data->input = NULL;
    buffer = malloc(sizeof(*buffer) * BUFSIZ);
    if (buffer == NULL)
        {
            free(buffer);
            return(0);
        }
    read_size = getline(&buffer, &size, stdin);
    if (read_size == -1)
    {
        free(buffer);
        exit(1);
    }
    data->input = buffer;
    return(1);
 }
