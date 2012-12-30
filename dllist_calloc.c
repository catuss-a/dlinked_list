
#include <stdlib.h>
#include <stdio.h>

void		*dllist_calloc(size_t size)
{
  void		*elem;

  elem = calloc(1, size);
  if (elem == NULL)
    perror("calloc");
  return elem;
}
