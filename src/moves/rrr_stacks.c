#include "../../lib/push_swap.h"

void rr(t_list **head)
{
	t_list *current;
	t_list *tmp = NULL;
	current = *head;
	tmp = listlast(*head);
	while (current)
	{
		if (!current->next->next)
		{
			current->next = NULL;
			break;
		}
		current = current->next;
	}

	listaddfront(head, tmp);
	write(1, "rra\n", 4);
}
