#include "../../lib/push_swap.h"

void r(t_list **head)
{
	t_list *tmp  = (*head);
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = (*head);
	*head = (*head)->next;
	tmp->next->next = NULL;
	write(1, "ra\n" , 3);
}