#include "main.h"


int exec(char **args, char *line)
{
	int status = 0;
	char *path = NULL;
	char *command;
	pid_t id;

	id = fork();

	if (id == 0)
	{
		if (strchr(args[0], '/') == NULL)
		{
			path = getenv("PATH");
			command = get_full_path(args[0], path);
			if (command == NULL)
			{
				perror(args[0]);
				return(127);
			}
		}
		else
			command = args[0];


	
		if (execve(command, args, environ) == -1)

		{
			perror(args[0]);
			free(args);
			free(line);
			exit(127);
		}

	}
	else
	{
		waitpid(id, &status, 0);
	}
	return (WEXITSTATUS(status));
}
