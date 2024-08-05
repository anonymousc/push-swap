/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listaddback.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 00:52:14 by aessadik          #+#    #+#             */
/*   Updated: 2024/08/03 00:52:14 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/push_swap.h"

void	listaddback(t_list **stacks, t_list *new)
{
	t_list	*head;

	head = *stacks;
	if (!head)
	{
		*stacks = new;
		return ;
	}
	while (head->next)
		head = head->next;
	head->next = new;
	new->next = NULL;
}

int	ft_listsize(t_list *head)
{
	int i;

	i = 0;
	while (head)
	{
		i++;
		head = head->next;
	}
	return (i);
}

void	listaddfront(t_list **stack, t_list *new)
{
	if (!*stack)
	{
		*stack = new;
		(*stack)->next = NULL;
		return ;
	}
	new->next = *stack;
	*stack = new;
}

t_list	*listnew(int data)
{
	t_list *stacks = malloc(sizeof(t_list));
	stacks->data = data;
	stacks->next = NULL;
	return (stacks);
}

t_list *listlast(t_list *stack_a)
{
	while (stack_a && stack_a->next)
		stack_a = stack_a->next;
	return stack_a;
}

void free_stack(t_list **stack)
{
	t_list *tmp = *stack;
	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
}