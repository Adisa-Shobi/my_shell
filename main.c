#include "main.h"

/**
 * data_init - initializes the shell data structure
 * 
 * @data: A struct containing all essential shell data
 * Return: void
 */
void data_init(sh_data *data, char **av)
{
    data->args = NULL;
    data->input = NULL;
    data->av = av;
}

/**
*main - Entry point to the shell program
*@ac: the argument counter 
*@av: Argument vector
*Return: 1 if successful
*/
int main(int ac, char **av)
{
    sh_data data;

    (void)ac;
    data_init(&data, av);
    shell(&data);
    return(1);
}
