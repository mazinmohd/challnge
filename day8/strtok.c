#include "main.h"



char *_strtok(char *string, const char *del)
{
	static char *next_token = NULL;
	char *delimiter;

	if (string != NULL)
		next_token = string;
	else
	{
		if (next_token == NULL)
			return NULL;
	string = next_token;
	}

	while (*string != '\0' && strchr(del, *string) != NULL) {
		string++;
	}

	delimiter = strpbrk(string, del);
	if (delimiter == NULL) {
		next_token = NULL;
		return string;
	}

	*delimiter = '\0';
	next_token = delimiter + 1;

	return (string);
}

