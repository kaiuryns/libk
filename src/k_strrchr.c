#include "libk.h"

char *k_strrchr(const char *s, int c) {
  const char *ptr = NULL;

  while (*s) {
    if ((unsigned char)*s == (unsigned char)c)
      ptr = s;
    s++;
  }
  if ((unsigned char)c == '\0')
    ptr = s;

  return (char *)ptr;
}
