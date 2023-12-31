#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <ctype.h>

extern char **environ;

char *read_line(void);

char **spilt_line(char *new_line);

int exec(char **args, char *line);

size_t _getline(char **lineptr, size_t *m, FILE *stream);

char *_strtok(char *string, const char *del);

void handle_path(char *command, char *path);

/* helper  */

int _isspace(char c);

int is_empty(const char *str);

#endif
