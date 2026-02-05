#include "libk.h"

t_list *k_lstlast(t_list *lst) {
  if (!lst)
    return NULL;

  while (lst->next)
    lst = lst->next;

  return lst;
}
