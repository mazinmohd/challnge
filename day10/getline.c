#include "main.h"


size_t _getline(char **lineptr, size_t *m, FILE *stream) {
  size_t li = 0;
  int i;
  char c;

  if (lineptr == NULL || m == NULL || stream == NULL) {
    return -1;
  }

  if (*lineptr == NULL) {
    *m = 15024;
    *lineptr = malloc(*m);

    if (*lineptr == NULL) {
      return -1;
    }
  }

  while ((i = read(fileno(stream), &c, 1)) == 1) {
    if (c == '\n') {
      break;
    }

    (*lineptr)[li++] = c;
  }

  if (i == 0) {
    return -1;
  }

  (*lineptr)[li] = '\0';
  return li;
}

