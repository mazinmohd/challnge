#include "main.h"

char *get_full_path(char *command, char *path) {
  char *token;
  char *full_path = NULL;

  token = strtok(path, ":");
  while (token != NULL) {
    full_path = malloc(strlen(token) + strlen(command) + 1);
    if (full_path == NULL) {
      return NULL;
    }

    strcpy(full_path, token);
    strcat(full_path, "/");
    strcat(full_path, command);

    if (access(full_path, X_OK) == 0) {
      return full_path;
    }

    free(full_path);
    token = strtok(NULL, ":");
  }

  return NULL;
}

