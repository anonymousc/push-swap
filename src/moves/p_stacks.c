/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_stacks.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 01:02:12 by aessadik          #+#    #+#             */
/*   Updated: 2024/08/11 14:13:35 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/push_swap.h"

void	pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	if (!(*stack_b))
		return ;
	tmp = (*stack_b);
	(*stack_b) = (*stack_b)->next;
	listaddfront(stack_a, tmp);
	write(1, "pa\n", 3);
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	tmp = (*stack_a);
	(*stack_a) = (*stack_a)->next;
	listaddfront(stack_b, tmp);
	write(1, "pb\n", 3);
}
