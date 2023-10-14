#include "main.h"

int _atoi_(const char *str) {
  int result = 0;
  int i, j;
  j = strlen(str);
  for (i = 0; i < j; i++) {
    if (str[i] < '0' || str[i] > '9') {
      break;
    }
    result = result * 10 + str[i] - '0';
  }
  return result;
}

