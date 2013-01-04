
#include <stdlib.h>
#include "dllist.h"

/*
  Description:

 */
void		*dllist_delete_elem(void **head, void *arg,
				    void (*func)(void *arg))
{
  t_dllist	*tmp;

  if ((t_dllist*)arg == NULL)
    return NULL;
  if (func)
    func(arg);
  tmp = dllist_next(((t_dllist*)arg));
  free(dllist_pop(head, arg));
  return tmp;
}
