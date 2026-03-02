#include "libk.h"
#include <unistd.h>

void k_putendl_fd(const char *s, int fd) {
  k_putstr_fd(s, fd);
  write(fd, "\n", 1);
}
