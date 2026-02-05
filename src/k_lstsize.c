#include "libk.h"

int k_lstsize(t_list *lst) {
  int i = 0;

  while (lst) {
    lst = lst->next;
    i++;
  }

  return i;
}
