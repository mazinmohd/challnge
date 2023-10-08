#include "main.h"


int main(int argc, char **argv)
{
	char *main_command;
	char **args;
	
	(void)argc;
	(void)argv;
	while (1)
	{
		main_command = getcmd();

		if (!main_command || main_command == NULL)
		{
			free(main_command);
			return (-1);
		}
		args = tokenizer(main_command);

		if (!args)
		{
			freear(args);
			return (-1);
		}

		execute(args);
	}

	return (0);
}
