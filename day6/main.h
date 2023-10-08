#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

char *getcmd(void);

char **tokenizer(char *tok_cmd);

void freear(char **fr_arg);

void execute(char **exe_arg);
#endif
