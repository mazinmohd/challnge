#include "main.h"

int main(void)
{
	char *line = NULL;
	char **tokens = NULL;
	while (1)
	{
		if (isatty(STDIN_FILENO))
			write(1, "$ ", 2);
		line = read_line();
		if (line == NULL)
		{
			if (isatty(STDIN_FILENO))
				write(1, "\n", 2);
			return (-1);
		}
		tokens = spilt_line(line);

		if (tokens[0] != NULL)
			exec(tokens);

		free(tokens);
		free(line);
	}
}
