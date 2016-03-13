# include "pushswap.h"

t_stack		*init_stack()
{
  t_stack	*stack;

  if ((stack = malloc(sizeof(t_stack))) == NULL)
    {
      ft_putstr("error\n");
      return (0);
    }
  stack->prev = stack;
  stack->next = stack;
  stack->data = 0;
  return (stack);
}

void		add_start_stack(t_stack *stack, int data)
{
  t_stack	*elem;

  if((elem = malloc(sizeof(t_stack))) == NULL)
    {
      ft_putstr("error\n");
      return ;
    }
  elem->data = data;
  elem->prev = stack;
  elem->next = stack->next;
  stack->next = elem;
  stack->next->prev = elem;
  return ;
}

int	main()
{
  t_stack *pile_a;
  int		i;
  i = 0;

  pile_a = init_stack();
  while (i <= 9)
    {
      add_start_stack(pile_a, i++);
    }
    while (pile_a->next->data)
   {
     printf("%d\n", pile_a->next->data);
     pile_a = pile_a->next;
   }
         printf("%d\n", pile_a->next->data);
  return(0);
}
