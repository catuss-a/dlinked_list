
#include "dllist.h"

/*
  Description:
  - dllist_pop_front pop elem from head.

  Args:
  - head: head of the linked list
  - elem: the element to pop

  Returns value:
  - void *elem
 */
void		*dllist_pop(void **head, void *elem)
{
  t_dllist	*walker = *(t_dllist**)head;
  t_dllist	*dll_elem = (t_dllist*)elem;

  if (dll_elem != NULL && walker != NULL)
    {
      if (walker == dll_elem)
	{
	  *(t_dllist**)head = dllist_next(walker);
	  return elem;
	}
      if (dllist_prev(dll_elem) != NULL)
	dllist_prev(dll_elem)->next = dllist_next(dll_elem);
      if (dllist_next(dll_elem) != NULL)
	dllist_next(dll_elem)->prev = dllist_prev(dll_elem);
    }
  return elem;
}
