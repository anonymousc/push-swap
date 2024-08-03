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
	t_list *head;

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

void	listaddfront(t_list **stacks, t_list *new)
{
	if (!*stacks)
		return ;
	new->next = *stacks;
	*stacks = new;
}

t_list	*listnew(int data)
{
	t_list *stacks = malloc(sizeof(t_list));
	stacks->data = data;
	stacks->next = NULL;
	return (stacks);
}

