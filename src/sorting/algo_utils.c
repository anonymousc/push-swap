/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 00:51:37 by aessadik          #+#    #+#             */
/*   Updated: 2024/08/11 14:12:44 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/push_swap.h"

void	sort_3(t_list **stack_a)
{
	int	first;
	int	second;
	int	third;

	first = (*stack_a)->data;
	second = (*stack_a)->next->data;
	third = (*stack_a)->next->next->data;
	if ((first < second) && (second > third) && (first < third))
	{
		swap(stack_a, "sa\n");
		rotate(stack_a, "ra\n");
	}
	else if ((first > second) && (second < third) && (first < third))
		swap(stack_a, "sa\n");
	else if ((first < second) && (second > third) && (first > third))
		reverse_rotate(stack_a, "rra\n");
	else if ((first > second) && (second > third) && (first > third))
	{
		swap(stack_a, "sa\n");
		reverse_rotate(stack_a, "rra\n");
	}
	else if ((first > second) && (second < third) && (first > third))
		rotate(stack_a, "ra\n");
}

void	sort_4(t_list **stack_a, t_list **stack_b, int *arr)
{
	min_to_top(stack_a, arr[0]);
	pb(stack_a, stack_b);
	sort_3(stack_a);
	pa(stack_a, stack_b);
}

void	sort_5(t_list **stack_a, t_list **stack_b, int *arr)
{
	min_to_top(stack_a, arr[0]);
	pb(stack_a, stack_b);
	min_to_top(stack_a, arr[1]);
	pb(stack_a, stack_b);
	sort_3(stack_a);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
}
