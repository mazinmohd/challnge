#include "main.h"

char **spilt(char *line)
{
	int i = 0;
	char **args;
	char *token;
	char *del = " \n\t";

	args = malloc(sizeof(char *) * 15);
	token = strtok(line, del);
	while (token != NULL)
	{
		args[i] = token;
		token = strtok(NULL, del);
		i++;
	}
	args[i] = NULL;
	free(token);
	return (args);

}
