#include "libk.h"

void k_putnbr_fd(int n, int fd) {
  long nb = n;

  if (nb < 0) {
    k_putchar_fd('-', fd);
    nb = -nb;
  }

  if (nb >= 10)
    k_putnbr_fd(nb / 10, fd);
  k_putchar_fd((nb % 10) + '0', fd);
}
