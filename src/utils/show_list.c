#include "../../lib/push_swap.h"

void show_list(t_list *stack)
{
	t_list *head = stack;
	while (head)
		{
			printf("stack_a->%d\n", head->data);
			head = head->next;
		}
}
void show_list1(t_list *stack , int howfar)
{
	t_list *head = stack;
	while (howfar > 0)
		{
			printf("stack_a->next = %d\n", head->data);
			howfar++;
			head = head->next;
		}
		exit (1);
}