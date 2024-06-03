#include "../lib/push_swap.h"


t_list listnew(t_list *stacks, int data)
{
	stacks = malloc(sizeof(t_list));
	stacks->data = data;
	stacks->next = NULL;
}