/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_stacks.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 17:56:27 by aessadik          #+#    #+#             */
/*   Updated: 2024/08/11 14:13:09 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/push_swap.h"

void	swap(t_list **stacks, char *str)
{
	t_list	*tmp;

	tmp = (*stacks);
	(*stacks) = (*stacks)->next;
	tmp->next = (*stacks)->next;
	(*stacks)->next = tmp;
	write(1, str, 3);
}
