#include "libk.h"

char *k_strstr(const char *haystack, const char *needle) {
  size_t i = 0;
  size_t j = 0;

  if (!*needle)
    return (char *)haystack;

  while (haystack[i]) {
    j = 0;
    while (haystack[i + j] && haystack[i + j] == needle[j])
      j++;
    if (needle[j] == '\0')
      return (char *)(haystack + i);
    i++;
  }
  return NULL;
}
