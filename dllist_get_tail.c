

#include "dllist.h"

/*
  Description:
  - dllist_get_tail returns the tail of the linked
  list from an elem.

  Returns value:
  - void *tail
 */
void		*dllist_get_tail(void *elem)
{
  t_dllist	*dll_elem = (t_dllist*)elem;

  while (dll_elem && dllist_next(dll_elem))
    dll_elem = dllist_next(dll_elem);
  return dll_elem;
}
