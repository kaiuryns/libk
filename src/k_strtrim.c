#include "libk.h"

char *k_strtrim(const char *s1, const char *set) {
  while (*s1 && k_strchr(set, (unsigned char)*s1))
    s1++;

  size_t len = k_strlen(s1);

  while (len && k_strchr(set, (unsigned char)s1[len - 1]))
    len--;

  return k_substr(s1, 0, len);
}
