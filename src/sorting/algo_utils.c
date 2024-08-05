/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 00:51:37 by aessadik          #+#    #+#             */
/*   Updated: 2024/08/03 00:51:37 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/push_swap.h"


void sort_2(t_list **stack)
{
	if((*stack)->data > (*stack)->next->data)
		s(stack);
}

void sort_3(t_list **stack_a  , int size)
{
	(void) size;
	if ((*stack_a)->data == grab_max(*stack_a))
	{
		r(stack_a);
		if ((*stack_a)->data > (*stack_a)->next->data)
			s(stack_a);
	}
	else if ((*stack_a)->next->data == grab_max(*stack_a ))
	{
		rr(stack_a);
		if ((*stack_a)->data > (*stack_a)->next->data)
			s(stack_a);
	}
	else
		s(stack_a);

}

void sort_4(t_list **stack_a, t_list **stack_b, int size)
{
	min_to_top(stack_a);
	pb(stack_a, stack_b);
	sort_3(stack_a, size);
	pa(stack_a, stack_b);
}

void sort_5(t_list **stack_a, t_list **stack_b, int size)
{
	min_to_top(stack_a);
	pb(stack_a, stack_b);
	sort_4(stack_a,stack_b,size);
	pa(stack_a, stack_b);
	// pa(stack_a, stack_b);
	// s(stack_a);
}

