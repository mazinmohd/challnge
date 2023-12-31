#include "main.h"

int main(void)
{
	char *line = NULL;
	char **tokens = NULL;
	int status = 0;

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
		status = exec(tokens, line);

		free(tokens);
		free(line);
	}

	return (status);
}
