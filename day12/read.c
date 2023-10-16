#include "main.h"


char *_read(void)
{
	char *line = NULL;
	size_t buff_size = 0;
	ssize_t ret;
	
	if (isatty(STDIN_FILENO))
		write(1, "$ ", 2);
	ret = getline(&line, &buff_size, stdin);
	
	if (ret == -1)
	{
		free(line);
		return (NULL);
	}

	return (line);
}
