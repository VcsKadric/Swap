# ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef struct	s_list
{
  int		data;
  struct s_list *prev;
  struct s_list *next;
}		t_stack;

t_stack		*init_stack();
#endif
