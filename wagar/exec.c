#include "main.h"


int exec(char **args, char *path, char *line)
{
	int status = 0;
	pid_t id;
	/*char *exec_args[2];
	
	exec_args[0] = strdup(args[0]);
	exec_args[1] = NULL;*/

	id = fork();

	if (id == 0)
	{
		if (execve(path, args, environ) == -1)
		{
			perror(args[0]);
			free(line);
			free(args);
			free(path);
			exit(127);
		}

	}
	else
	{
		waitpid(id, &status, 0);
	}
	return (WEXITSTATUS(status));
}

/*int exec(char **args)
{
    int status = 0;
    pid_t id;

    id = fork();

    if (id == 0)
    {
        if (execve(args[0], args, environ) == -1)
        {
            perror("execve");
            exit(1);  Exit with an error code to indicate failure
        }
    }
    else if (id < 0)
    {
        perror("fork");
        exit(1);  Exit with an error code to indicate failure
    }
    else
    {
        waitpid(id, &status, 0);
        if (WIFEXITED(status))
        {
            status = WEXITSTATUS(status);
        }
    }

    return status;
}*/
