/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 00:51:43 by aessadik          #+#    #+#             */
/*   Updated: 2024/08/11 14:15:50 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/push_swap.h"

void	increment(int *start, int *end, int size)
{
	if (*start < *end)
		(*start)++;
	if (*end < size - 1)
		(*end)++;
}

void	refill_stack_a(t_list **stack_a, t_list **stack_b)
{
	int	max;

	max = grab_max(*stack_b);
	while (*stack_b)
	{
		max = grab_max(*stack_b);
		if (*stack_b && (*stack_b)->data == max)
			pa(stack_a, stack_b);
		else
			max_to_top(stack_b, max);
	}
}

void	main_algo(t_list **stack_a, t_list **stack_b, int *arr)
{
	int	start;
	int	size;
	int	end;

	start = 0;
	size = ft_listsize(*stack_a);
	end = ft_ranger(size);
	while (*stack_a)
	{
		if ((*stack_a)->data < arr[start])
		{
			pb(stack_a, stack_b);
			rotate(stack_b, "rb\n");
			increment(&start, &end, size);
		}
		else if ((*stack_a)->data >= arr[start] && (*stack_a)->data <= arr[end])
		{
			pb(stack_a, stack_b);
			increment(&start, &end, size);
		}
		else
			rotate(stack_a, "ra\n");
	}
	refill_stack_a(stack_a, stack_b);
}
