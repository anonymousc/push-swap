#include "../../lib/push_swap.h"

t_list *ft_check(t_list *stack_a, t_list *stack_b , int len)
{
		if (len == 2)
			sort_2(&stack_a);
		else if(len  == 3)
			sort_3(&stack_a , len);
		else if(len == 4)
			sort_4(&stack_a , &stack_b, len);
		else if(len == 5)
			sort_5(&stack_a, &stack_b, len);
		return (stack_a);
}
