/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 00:51:47 by aessadik          #+#    #+#             */
/*   Updated: 2024/08/03 00:51:47 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"


int main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	char	**str;
	int		*arr;

	stack_b = NULL;
	str = parser(ac ,av);
	stack_a  = fill_stack(str);
	arr = fill_arr(stack_a);
	stack_a->vars.size = ft_listsize(stack_a);
	if (!check_duplicates(arr , stack_a->vars.size , stack_a) || is_sorted(stack_a))
	{
		ft_free(str);
		free_stack(&stack_a);
		free(arr);
		exit(1);
	}
	arr = bubble_sort(arr , stack_a->vars.size);
	stack_a = ft_check(stack_a , stack_b, stack_a->vars.size);
	free(arr);
	free_stack(&stack_a);
	ft_free(str);
}
