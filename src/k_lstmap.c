#include "libk.h"

t_list *k_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *)) {
  if (!lst || !f || !del)
    return NULL;

  t_list *new_list = NULL;
  t_list *new_node;
  void *content;

  while (lst) {
    content = (*f)(lst->content);
    new_node = k_lstnew(content);

    if (!new_node) {
      del(content);
      k_lstclear(&new_list, del);
      return NULL;
    }

    k_lstadd_back(&new_list, new_node);
    lst = lst->next;
  }

  return new_list;
}
