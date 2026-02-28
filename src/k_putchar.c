#include "libk.h"
#include <unistd.h>

void k_putchar(char c) { k_putchar_fd(c, 1); }
