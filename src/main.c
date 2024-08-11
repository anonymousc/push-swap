/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 00:51:47 by aessadik          #+#    #+#             */
/*   Updated: 2024/08/11 14:14:16 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	char	**str;
	int		*arr;

	stack_b = NULL;
	stack_a = NULL;
	str = parser(ac, av);
	fill_stack(&stack_a, str);
	arr = fill_arr(stack_a);
	stack_a->vars.size = ft_listsize(stack_a);
	if (!check_duplicates(arr, stack_a->vars.size, stack_a)
		|| is_sorted(stack_a))
	{
		ft_free(str);
		free(arr);
		free_stack(&stack_a);
		exit(1);
	}
	ft_check(stack_a, stack_b, stack_a->vars.size, arr);
	free(arr);
	ft_free(str);
}
