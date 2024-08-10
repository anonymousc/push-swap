/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr_stacks.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 17:56:25 by aessadik          #+#    #+#             */
/*   Updated: 2024/08/10 17:58:57 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/push_swap.h"

void	reverse_rotate(t_list **head, char *str)
{
	t_list	*current;
	t_list	*tmp;

	tmp = NULL;
	current = *head;
	tmp = listlast(*head);
	while (current)
	{
		if (!current->next->next)
		{
			current->next = NULL;
			break ;
		}
		current = current->next;
	}
	listaddfront(head, tmp);
	write(1, str, 4);
}

void	rrr(t_list **head)
{
	reverse_rotate(head, NULL);
	reverse_rotate(head, NULL);
	write(1, "rrr\n", 4);
}
