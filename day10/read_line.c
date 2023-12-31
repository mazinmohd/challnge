#include "main.h"


char *read_line(void)
{
	char *new_line = NULL;
	size_t buff_len = 0;
	ssize_t chars;
	
	if (isatty(STDIN_FILENO))
		write(1, "$ ", 2);
	chars = _getline(&new_line, &buff_len, stdin);

	if (chars == -1)
	{
		free(new_line);
		return (NULL);
	}
	return (new_line);
}
