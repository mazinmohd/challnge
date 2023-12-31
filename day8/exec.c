#include "main.h"


int exec(char **args, char *line)
{
	int status = 0;
	char *path = NULL;
	pid_t id;

	id = fork();

	if (id == 0)
	{
		if (strchr(args[0], '/') == NULL)
		{
			path = getenv("PATH");
			handle_path(args[0], path);
		}
		if (execve(args[0], args, environ) == -1)
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
