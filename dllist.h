
#ifndef _DLLIST_H_
# define _DLLIST_H_

# include <stddef.h>

typedef struct s_dllist t_dllist;

struct s_dllist
{
  t_dllist *next;
  t_dllist *prev;
};

/*
  MACCROS
 */

# define dllist_next(elem) (elem->next)
# define dllist_prev(elem) (elem->prev)

/*
  prototypes dllinked_list
*/
void		*dllist_calloc(size_t size);
void		*dllist_malloc_push_front(void **head, size_t size);
void		*dllist_malloc_push_back(void **head, size_t size);
void		*dllist_push_front(void **head, void *elem);
void		*dllist_push_back(void **head, void *elem);
void		*dllist_pop(void **head, void *elem);
void		*dllist_get_head(void *elem);
void		*dllist_get_tail(void *elem);
void		dllist_foreach_elem(void **head, void *arg,
				    void (*func)(void **h, void *elem, void *arg));


#endif
