/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillers_sortedarr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 00:51:59 by aessadik          #+#    #+#             */
/*   Updated: 2024/08/05 06:20:30 by aessadik         ###   ########.fr       */
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
	arr = (int *) malloc(sizeof(int) * size);
	while (++i < size)
	{
		arr[i] = stack->data;
		stack = stack->next;
	}
	return (arr);
}

t_list *fill_stack(char **ptr)
{
	t_list *stacks ;
	
	int j;
	
	j = 0;
	stacks = NULL;
	while (ptr[j])
		listaddback(&stacks , listnew(ft_atoi(ptr[j++])));
	return (stacks);
}

// int grab_max(t_list *stacks, int size)
// {
// 	int *arr = fill_arr(stacks);
// 	arr = bubble_sort(arr , ft_listsize(stacks));
// 	t_list *head;
// 	size = ft_listsize(stacks);
// 	head = stacks;
// 	while (head)
// 	{
// 		if (arr[size - 1] == head->data)
// 		{
// 			return (head->data);
// 		}
// 		head = head->next;	
// 	}
// 	return (0);
// }
int grab_min(t_list *stacks)
{
	t_list *head;
	head = stacks;
	int min = head->data;
	while (head)
	{
		if (head->data < min)
			min = head->data;
		head = head->next;
	}
	return (min);
}


int grab_max(t_list *stacks)
{
	t_list *head;
	head = stacks;
	int max = head->data;
	while (head)
	{
		if (head->data > max)
			max = head->data;
		head = head->next;
	}
	return (max);
}


void min_to_top(t_list **stack)
{
	t_list *tmp ;
	int pos = -1;
	int i = -1;
	int size = ft_listsize(*stack);
	tmp = *stack;
	while(tmp)
	{
		++pos;
		if (tmp->data == grab_min(tmp))
			break;
		tmp = tmp->next;
	}
	tmp = *stack;
	while (++i < pos)
	{
		if (pos < size / 2)
			r(stack);
	}
	while (++i <= size)
	{
		if (pos > size / 2)
			rr(stack);
	}
	
}