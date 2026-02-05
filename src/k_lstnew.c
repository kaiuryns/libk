#include "libk.h"
#include <stdlib.h>

t_list *k_lstnew(void *content) {
  t_list *list = malloc(sizeof(t_list));
  if (!list)
    return NULL;

  list->content = content;
  list->next = NULL;

  return list;
}
