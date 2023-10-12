#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <ctype.h>

extern char **environ;

char *read_line(void);

char **spilt_line(char *new_line);

int exec(char **args, char *line);

size_t _getline(char **lineptr, size_t *m, FILE *stream);

char *_strtok(char *string, const char *del);

char *handle_path(char *command, char *path);

char *_getpath(char *command, char *path);

char *get_full_path(char *command, char *path);

int check_built(char *command);

void handle_built(char **args, int *status, char *command);
/* helper  */

int _isspace(char c);

int is_empty(const char *str);

int _atoi_(const char *str);

/* test */
void printerror(char *name, char *command, int index);

char *_itoa(int n);

void rev_str(char *str, int len);
#endif
