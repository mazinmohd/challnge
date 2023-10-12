#include "main.h"

int main(int argc, char **argv)
{
	char *line = NULL;
	char **tokens = NULL;
	int status = 0;

	(void)argv;
	(void) argc;

	while (1)
	{
		if (isatty(STDIN_FILENO))
			write(1, "$ ", 2);
		line = read_line();

		if (line == NULL)
		{
			if (isatty(STDIN_FILENO))
				write(1, "\n", 2);
			return (status);
		}
		if (is_empty(line))
		{
			free(line);
			continue;
		}
		tokens = spilt_line(line);
		if (tokens == NULL)
		{
			free(tokens);
			continue;
		}
		if (check_built(line))
			handle_built(tokens, &status, line);
		status = exec(tokens, line);

		free(tokens);
		free(line);
	}

	return (status);
}
