#include "main.h"

/**
 * split_line - Splits the input line into tokens.
 *
 * @data: A structure containing essential shell data
 * Return: 1 if successful.
 */
int split_line(sh_data *data)
{
    char **tokens;
    if (countWords(data->input) == 0)
    {
        return(0);
    }
    tokens = malloc((countWords(data->input) + 1) * sizeof(*tokens));

}

/**
 * countWords - counts the number of words in input
 *
 * @input: A string
 * Return: The number of words in input
 */
int countWords(char *input)
{
    int isWord = 0, count = 0;

    if (!input)
        return (0);
    while (*input)
    {
        if (*input != ' ')
            isWord = 1;
        else
        {
            if (isWord)
                count++;
            isWord = 0;
        }
        input++;
    }
    isWord ? count + 1 : count;
    return(count);
}