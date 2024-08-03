#include "../../lib/push_swap.h"


void s(t_list **stacks)
{
	t_list *tmp;
	tmp = (*stacks);
	(*stacks) = (*stacks)->next;
	tmp->next = (*stacks)->next;
	(*stacks)->next = tmp;
	write(1, "sa\n" ,3);
}