
#include "dllist.h"


typedef struct s_user t_user;

struct s_user
{
  t_dllist links;

  char *name;
  int no;
};

void print_ll(void **head, void *elem, void *arg)
{
  printf("name:[%s]\nno:[%d]\n", ((t_user*)elem)->name,
	 ((t_user*)elem)->no);
}

void dpop(void **head, void *elem, void *arg)
{
  /* free( */dllist_pop(head, elem);
}


int main(int ac, char **av)
{
  int i;
  t_user *head = NULL;
  t_user *new;

  i = 0;
  while (i < ac)
    {
      new = dllist_malloc_push_front((void*)&head, sizeof(*head));
      new->name = av[i];
      new->no = i;
      ++i;
    }

  dllist_foreach_elem((void*)&head, NULL,
		      &print_ll);
  
  while (head)
    dllist_delete_elem((void**)&head, head, NULL);
  return 1;
}
