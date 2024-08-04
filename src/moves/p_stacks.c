#include "../../lib/push_swap.h"

void pb(t_list **stacks)
{
	t_list **stack_b;
	stack_b = listnew((*stacks)->data);
	write(1, "pa\n", 3);
}
void pa(t_list **stacks)
{
	t_list **stack_a;
	listaddfront(*stack_a , (*stacks));
	write(1, "pa\n", 3);
}