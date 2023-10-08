#include "main.h"

char *getcmd(void)
{
	char *buff;
	size_t buff_size;
	ssize_t r_line;

	write(1, "$", 2);
	r_line = getline(&buff, &buff_size, stdin);

	if (r_line == -1)
	{
		free(buff);
		return (NULL);
	}

	return (buff);

}
