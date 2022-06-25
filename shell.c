#include "main.h"

/**
 * shell - The main shell loop 
 * 
 * @data: A data structure containing all essential shell data
 * Return: void 
 */
void shell(sh_data *data)
{
    while (1)
    {
        type_prompt();
        get_line(data);
        printf("%s", data->input);
    }

}

/**
 * type_prompt - types the prompt before each user input
 * Return: void
 */
void type_prompt(void)
{
    static int first_time = 1;
    if (first_time)
    {
        fflush(stdin);
        first_time = 0;
    }
    if (isatty(STDIN_FILENO))
        write(STDIN_FILENO, ":) ", 3);
    else
        exit(1);
}


