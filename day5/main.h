#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

void get_command(void);

char **spilt_command(char *command);

void execute(char **args);
#endif
