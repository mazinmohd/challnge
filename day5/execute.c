#include "main.h"

void execute(char **args)
{
	pid_t id;
	id = fork();

	if (id == 0)
	{
		if(execve(args[0], args, NULL) == -1)
		{
			perror("error");
			exit(0);
		}
	}
	else
	{
		wait(NULL);
	}
}
