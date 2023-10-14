#include "main.h"


void comment(char *line)
{
	int j = 0;

	if (line[j] == '#')
		(line[j]) = '\0';
	while (line[j] != '\0')
	{
		if (line[j] == '#' && line[j - 1] == ' ')
			break;
		j++;
	}
	line[j] = '\0';
}
