#include "libk.h"
#include <unistd.h>

void k_putchar_fd(char c, int fd) { write(fd, &c, 1); }
