#include "libk.h"

void k_lstadd_back(t_list **lst, t_list *new) {
  if (!lst || !new)
    return;

  new->next = NULL;

  if (!*lst) {
    *lst = new;
    return;
  }

  t_list *last = k_lstlast(*lst);
  last->next = new;
}
