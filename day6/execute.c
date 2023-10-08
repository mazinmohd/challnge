#include "main.h"


void execute(char **exe_arg)
{
	pid_t id;


	id = fork();

	if (id == 0)
	{
		if (execve(exe_arg[0], exe_arg, NULL) == -1)
		{
			freear(exe_arg);
			perror("exe_arg[0]");
		}
	}
	else
	{
		wait(NULL);
		freear(exe_arg);
	}
}
