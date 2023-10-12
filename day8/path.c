#include "main.h"


void handle_path(char *command, char *path)
{
	char *token;
	char *full_path = NULL;
	const char *delim = ":";
	size_t command_len;
	size_t token_len;

	token = strtok(path, delim);
	while (token != NULL)
	{
		token_len = strlen(token);
		command_len = strlen(command);
		full_path = malloc(token_len + command_len + 2);

		strcpy(full_path, token);
		full_path[token_len] = '/';
		strcpy(full_path + token_len + 1, command);

		if (access(full_path, X_OK) == 0)
		{
			strcpy(command, full_path);
			free(full_path);
			return;
		}

		token = strtok(NULL, delim);
	}
	free(full_path);
}

