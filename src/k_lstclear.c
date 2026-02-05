#include "libk.h"

void k_lstclear(t_list **lst, void (*del)(void *)) {
  if (!lst || !del)
    return;

  t_list *tmp;
  while (*lst) {
    tmp = (*lst)->next;
    k_lstdelone(*lst, del);
    *lst = tmp;
  }
}
