
#include "dllist.h"

/*
  Description:
  - dllist_push_front pushes element into the linked list as head.
  If head is null then elem becomes the head.

  Args:
  - head: head of the linked list
  - elem: the element to push

  Returns value:
  - void *elem
 */
void		*dllist_push_front(void **head, void *elem)
{
  t_dllist	*walker = *(t_dllist**)head;
  t_dllist	*dll_elem = (t_dllist*)elem;

  if (dll_elem != NULL && walker != NULL)
    {
      dllist_next(dll_elem) = walker;
      dllist_prev(walker) = dll_elem;
    }
  return (*(t_dllist**)head = dll_elem);
}
