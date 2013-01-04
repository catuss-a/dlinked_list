
## VARIABLES
NAME            =       libdlinked_list.a
CC              =       gcc

SRCS_DIR        =       ./srcs/
INC_DIR         =       . #/include/
INCLUDE         =       -I$(INC_DIR)
CFLAGS          +=      -W -Wall
CFLAGS          +=      $(INCLUDE)

OBJS		=	$(SRCS:.c=.o)
AR              =       ar -r
RANLIB          =       ranlib
RM              =       rm -f

## FILES
SRCS		=	dllist_calloc.c			\
			dllist_push_front.c		\
			dllist_push_back.c		\
			dllist_pop.c			\
			dllist_get_head.c		\
			dllist_get_tail.c		\
			dllist_foreach_elem.c		\
			dllist_delete_elem.c		\
			dllist_malloc_push_front.c	\
			dllist_malloc_push_back.c	

## RULES
$(NAME)		:	$(OBJS)
		$(AR) $(NAME) $(OBJS)
		$(RANLIB) $(NAME)

all		:	$(NAME)

clean		:
		$(RM) $(OBJS)

fclean		:	clean
		$(RM) $(NAME)

re		:	fclean all

.PHONY		:	all clean fclean re