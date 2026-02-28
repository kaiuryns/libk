#include "libk.h"
#include <unistd.h>

void k_putstr(const char *s) { k_putstr_fd(s, 1); }
