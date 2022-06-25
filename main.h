#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

typedef struct shell_data
{
    char **av;
    char **args;
    char *input;    
} sh_data;

/* shell.c */
void shell(sh_data *data);
void type_prompt(void);

/* get_line.c */
int get_line(sh_data *data);

#endif /* MAIN_H */