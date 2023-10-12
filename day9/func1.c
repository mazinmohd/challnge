#include "main.h"

int is_empty(const char *str)
{
	if (str == NULL)
		return (1);

	while (*str)
	{
		if (!_isspace(*str))
			return (0);
		str++;
	}

	return (1);
}

int _isspace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' ||
			c == '\v' || c == '\f' || c == '\r');
}
