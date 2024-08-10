/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillers_sortedarr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 00:51:59 by aessadik          #+#    #+#             */
/*   Updated: 2024/08/10 18:06:08 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/push_swap.h"

int	*fill_arr(t_list *stack)
{
	int	*arr;
	int	i;
	int	size;

	i = -1;
	size = ft_listsize(stack);
	arr = (int *)malloc(sizeof(int) * size);
	while (++i < size)
	{
		arr[i] = stack->data;
		stack = stack->next;
	}
	bubble_sort(arr, size);
	return (arr);
}

void	fill_stack(t_list **stack, char **ptr)
{
	int	j;
	int	i;

	j = 0;
	i = 0;
	while (ptr[j])
	{
		i = 0;
		while (ptr[j][i])
		{
			if (ptr[j][i] == '-' || ptr[j][i] == '+')
				i++;
			if (!(ptr[j][i] >= '0' && ptr[j][i] <= '9'))
			{
				ft_free(ptr);
				write(1, "Error\n", 7);
				exit(1);
			}
			i++;
		}
		j++;
	}
	j = 0;
	while (ptr[j])
		listaddback(stack, listnew(ft_atoi(ptr[j++], stack, ptr)));
}

int	grab_min(t_list *stacks)
{
	t_list	*head;
	int		min;

	head = stacks;
	min = head->data;
	while (head)
	{
		if (head->data < min)
			min = head->data;
		head = head->next;
	}
	return (min);
}

int	grab_max(t_list *stacks)
{
	t_list	*head;
	int		max;

	head = stacks;
	max = head->data;
	while (head)
	{
		if (head->data > max)
			max = head->data;
		head = head->next;
	}
	return (max);
}

void	min_to_top(t_list **stack, int min)
{
	t_list	*tmp;
	int		i;

	i = 0;
	(*stack)->vars.size = ft_listsize(*stack);
	tmp = *stack;
	while (tmp)
	{
		if (min == tmp->data)
			break ;
		i++;
		tmp = tmp->next;
	}
	if (i <= (*stack)->vars.size / 2)
		while (i-- > 0)
			rotate(stack, "ra\n");
	else
	{
		i = (*stack)->vars.size - i;
		while (i-- > 0)
			reverse_rotate(stack, "rra\n");
	}
}
