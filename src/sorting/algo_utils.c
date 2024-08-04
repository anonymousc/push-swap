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
	{
		printf("%d\n", (*stack)->data);
		printf("%d\n", (*stack)->next->data);
		s(stack);
	}
}
void sort_3(t_list **stack)
{
	
}
void sort_4(t_list **stack);
void sort_5(t_list **stack);