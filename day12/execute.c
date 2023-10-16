#include "main.h"

int exec(char **args)
{
	int status = 0;
	pid_t id;

	id = fork();

	if (id == 0)
	{
		execve(args[0], args, NULL);
	}
	else 
		waitpid(id, &status, 0);

	return (WEXITSTATUS(status));
}
