#include "main.h"


int check_built(char *command)
{
	char *built_fun[] = {"exit", "env", "cd", NULL};
	int i;

	for (i = 0; built_fun[i]; i++)
	{
		if (strcmp(command, built_fun[i]) == 0)
				return (1);
	}

	return (0);
}

void handle_built(char **args, int *status, char *command)
{
	int i;

	if (strcmp(args[0], "exit") == 0)
	{
		if (args[1])
			*status = _atoi_(args[1]);
		free(command);
		free(args);
		exit(*status);
	}
	else if (strcmp(args[0], "env") == 0)
	{
		for (i = 0; environ[i]; i++)
		{
			write(STDOUT_FILENO, environ[i], strlen(environ[i]));
			write(STDOUT_FILENO, "\n", 1);
		}
		free(command);
		free(args);
		exit(*status);
	}
}
