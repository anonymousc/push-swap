/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_stacks.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 17:56:20 by aessadik          #+#    #+#             */
/*   Updated: 2024/08/10 17:59:17 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/push_swap.h"

void	rotate(t_list **head, char *str)
{
	t_list	*tmp;

	tmp = (*head);
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = (*head);
	*head = (*head)->next;
	tmp->next->next = NULL;
	write(1, str, 3);
}

void	rr(t_list **head)
{
	rotate(head, NULL);
	rotate(head, NULL);
	write(1, "rr\n", 3);
}
