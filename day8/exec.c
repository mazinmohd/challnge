#include "main.h"


void exec(char **args)
{
	pid_t id;

	id = fork();

	if (id == 0)
	{
		execve(args[0], args, NULL);
		perror(args[0]);
		exit(1);
	}
	else
	{
		wait(NULL);
	}
}
