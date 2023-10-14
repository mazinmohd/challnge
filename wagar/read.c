#include "main.h"


char *read_line(void)
{
	char *new_line = NULL;
	size_t buff_len = 0;
	ssize_t chars;

	chars = getline(&new_line, &buff_len, stdin);

	if (chars == -1)
	{
		free(new_line);
		return (NULL);
	}
	return (new_line);
}
