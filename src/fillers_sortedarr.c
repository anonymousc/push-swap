/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillers_sortedarr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 00:51:59 by aessadik          #+#    #+#             */
/*   Updated: 2024/08/03 19:05:39 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"

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

int grab_max(t_list *stacks, int *arr , int size)
{
	t_list *head;
	head = stacks;
	while (head)
	{
		if (arr[size - 1] == head->data)
		{
			return (head->data);
		}
		head = head->next;	
	}
	return (0);
}
int grab_min(t_list *stacks, int *arr)
{
		t_list *head;
	head = stacks;
	while (head)
	{
		if (arr[0] == head->data)
		{
			return (head->data);
		}
		head = head->next;	
	}
	return (0);
}


