#include "main.h"

int main(void)
{
	char *command;
	char **args;
	int i = 0;
	size_t n;
	ssize_t chars;
	while (1)
	{
		get_command();
		
		chars = getline(&command, &n, stdin);

		if (chars == -1)
		{
			free(command);
			return (-1);
		}
		args = spilt_command(command);
		
		execute(args);
	}
	while (args[i])
	{
		free(args[i]);
		i++;
	}
	free(args);
	free(command);
	
	return 0;
}
