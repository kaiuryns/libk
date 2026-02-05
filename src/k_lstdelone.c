#include "libk.h"
#include <stdlib.h>

void k_lstdelone(t_list *lst, void (*del)(void *)) {
  if (!lst || !del)
    return;

  del(lst->content);
  free(lst);
}
