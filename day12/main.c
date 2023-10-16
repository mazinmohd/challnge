#include "main.h"

int main(void)
{
	char *line = NULL;
	char **args = NULL;
	int status = 0;

	while (1)
	{
		line = _read();
		if (line == NULL)
			return (-1);

		args = spilt(line);
		
		status = exec(args);

		free(line);
		free(args);
	}
	return (status);
}
