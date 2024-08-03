#include "../../lib/push_swap.h"

void rr(t_list **head)
{
	t_list *tmp;
	t_list *prev;
	prev = (*head);
	while (prev->next->next)
	{
		prev = prev->next;
	}
	tmp = prev->next;
	prev->next = NULL;
	tmp->next = (*head);
	(*head) = tmp;
}
