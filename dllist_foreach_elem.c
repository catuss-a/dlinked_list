
#include "dllist.h"

/*
  Description:

 */
void		dllist_foreach_elem(void **head, void *arg,
				    void (*func)(void **h, void *elem, void *arg))
{
  t_dllist	*walker = *(t_dllist**)head;

  while (walker)
    {
      func(head, walker, arg);
      walker = dllist_next(walker);
    }
}
