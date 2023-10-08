#include "main.h"


void freear(char **fr_arg)
{
	int i = 0;

	/*if (!fr_arg)
		return;*/

	while (fr_arg[i])
	{
		free(fr_arg[i]);
		i++;
	}
	free(fr_arg);
}
