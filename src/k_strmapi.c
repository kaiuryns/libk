#include "libk.h"
#include <stdlib.h>

char *k_strmapi(char const *s, char (*f)(unsigned int, char)) {
  if (!s || !f)
    return NULL;

  size_t len = k_strlen(s);

  char *ptr = malloc(len + 1);
  if (!ptr)
    return NULL;

  unsigned int i = 0;
  while (i < len) {
    ptr[i] = f(i, s[i]);
    i++;
  }
  ptr[i] = '\0';

  return ptr;
}
