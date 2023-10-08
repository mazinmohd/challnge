#include "main.h"

char **spilt_command(char *command)
{
	const char *del = " \n\t";
	char *token, *second_tok;
	char **args;
	int i = 0, tok_num = 0;
	char *copy;
	
	copy = malloc(sizeof(char) * strlen(command));
	copy = strdup(command);

	token = strtok(copy, del);

	while (token != NULL)
	{
		tok_num++;
		token = strtok(NULL, del);
	}
	free(copy);

	args = malloc(sizeof(char *) * (tok_num + 1));

	second_tok = strtok(command, del);

	while (second_tok != NULL)
	{
		args[i] = strdup(second_tok);
		second_tok = strtok(NULL, del);
		i++;
	}
	args[i] = NULL;
	free(command);
	free(token);
	return (args);
}
