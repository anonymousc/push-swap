#include "../../lib/push_swap.h"

t_list *ft_check(t_list *stacks , int len)
{
	if (len == 2)
		sort_2(&stacks);
	else if(len  == 3)
		sort_3(&stacks);
	else if(len == 4)
		sort_4(&stacks);
	else if(len == 5)
		sort_5(&stacks);
	return (stacks);
}