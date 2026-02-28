#include "libk.h"
#include <unistd.h>

void k_putstr_fd(const char *s, int fd) { write(fd, s, k_strlen(s)); }
