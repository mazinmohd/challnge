#include "main.h"


char **tokenizer(char *tok_cmd)
{
	char *token;
	char *cpy_cmd;
	const char *del = " \n\t";
	char **tok_arg;
	int tok_num, i = 0;
	cpy_cmd = strdup(tok_cmd);

	token = strtok(cpy_cmd, del);
	
	while (token != NULL)
	{
		tok_num++;
		token = strtok(NULL, del);
	}
	
	free(cpy_cmd);

	tok_arg = malloc(sizeof(char *) * (tok_num + 1));
	
	if (!tok_arg)
	{
		freear(tok_arg);
		return (NULL);
	}

	token = strtok(tok_cmd, del);

	while (token != NULL)
	{
		tok_arg[i] = strdup(token);
		token = strtok(NULL, del);
		i++;
	}
	tok_arg[i] = NULL;
	free(token);

	return (tok_arg);
}
