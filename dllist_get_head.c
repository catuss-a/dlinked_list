

#include "dllist.h"

/*
  Description:
  - dllist_get_head returns the head of the linked
  list from an elem.

  Returns value:
  - void *head
 */
void		*dllist_get_head(void *elem)
{
  t_dllist	*dll_elem = (t_dllist*)elem;

  while (dll_elem && dllist_prev(dll_elem))
    dll_elem = dllist_prev(dll_elem);
  return dll_elem;
}
