/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_len_tosort.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 17:56:33 by aessadik          #+#    #+#             */
/*   Updated: 2024/08/10 17:56:34 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/push_swap.h"

void	ft_check(t_list *stack_a, t_list *stack_b, int len, int *arr)
{
	if (len == 2)
		swap(&stack_a, "sa\n");
	else if (len == 3)
		sort_3(&stack_a);
	else if (len == 4)
		sort_4(&stack_a, &stack_b, arr);
	else if (len == 5)
		sort_5(&stack_a, &stack_b, arr);
	else
		main_algo(&stack_a, &stack_b, arr);
	free_stack(&stack_a);
}
