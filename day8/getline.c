#include <stdio.h>
#include <stdlib.h>

size_t _getline(char **lineptr, size_t *m, FILE *stream)
{
	size_t li = 0;
	int i;

	if (lineptr == NULL || m == NULL || stream == NULL)
		return (-1);


	if (*lineptr == NULL)
	{
		*m = 128;
		*lineptr = malloc(*m);

		if (*lineptr == NULL)
		{
			return (-1);
		}
	}

	while ((i = fgetc(stream)) != EOF)
	{
		if (i == '\n')
			break;

		(*lineptr)[li++] = i;
		if (li == *m)
		{
			*m *= 2;
			*lineptr = realloc(*lineptr, *m);
			if (*lineptr == NULL)
				return (-1);
		}
	}
	if (i == EOF)
		return (-1);

	(*lineptr)[li] = '\0';
	return (li);
}
