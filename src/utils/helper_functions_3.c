/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_functions_3.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 02:42:09 by aessadik          #+#    #+#             */
/*   Updated: 2024/08/10 18:06:38 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/push_swap.h"

char	**ft_split(char *s, char c)
{
	int		i;
	char	**lst;

	i = 0;
	if (!s)
		return (free(s), NULL);
	lst = splitter(s, c, i);
	return (lst);
}

int	ft_ranger(int size)
{
	if (size > 5 && size <= 16)
		return (3);
	else if (size <= 100)
		return (15);
	else if (size <= 500)
		return (35);
	else
		return (45);
}

int	is_sorted(t_list *stack)
{
	t_list	*current;

	current = stack;
	while (current && current->next)
	{
		if (current->data > current->next->data)
			return (0);
		current = current->next;
	}
	return (1);
}

void	free_stack(t_list **stack)
{
	t_list	*tmp;

	tmp = *stack;
	while (tmp)
	{
		*stack = (*stack)->next;
		free(tmp);
		tmp = *stack;
	}
	stack = NULL;
}
