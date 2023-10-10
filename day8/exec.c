#include "main.h"


int exec(char **args)
{
	int status = 0;
	pid_t id;

	id = fork();

	if (id == 0)
	{
		if (execve(args[0], args, NULL) == -1)
		{
			perror(args[0]);
			exit(127);
		}

	}
	else
	{
			waitpid(id, &status, 0);
	}
	return (WEXITSTATUS(status));
}
