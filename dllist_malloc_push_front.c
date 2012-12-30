
#include "dllist.h"

/*
  Description:
  - dllist_malloc_push_front allocates a new element
  and push it with the function dllist_push_front().

  Args:
  - head: head of the linked list
  - size: size of the allocated memory

  Returns value:
  - void *elem
 */
void		*dllist_malloc_push_front(void **head, size_t size)
{
  t_dllist	*dll_elem;

  dll_elem = dllist_calloc(size);
  return dllist_push_front(head, dll_elem);
}
