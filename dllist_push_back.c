
#include "dllist.h"

/*
  Description:
  - dllist_push_back push the pointer 'elem' into head as tail.
  If 'head' is null then 'elem' becomes the head of the linked
  list.

  Args:
  - head: The head of the linked list. If 'head' is null then the
  it returns the new element as head of the linked list.
  - elem: The element to push into head as tail

  Returns value:
  - void *elem
*/

void		*dllist_push_back(void **head, void *elem)
{
  t_dllist	*walker = *(t_dllist**)head;
  t_dllist	*dll_elem = (t_dllist*)elem;

  if (dll_elem != NULL)
    {
      if (walker == NULL)
	return (*(t_dllist**)head = dll_elem);
      while (dllist_next(walker))
	walker = dllist_next(walker);
      dllist_prev(dll_elem) = walker;
      dllist_next(walker) = dll_elem;
    }
  return dll_elem;
}
