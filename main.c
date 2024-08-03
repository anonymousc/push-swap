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

#include "lib/push_swap.h"


int main(int ac, char **av)
{
	t_list *stacks;
	char **str;
	int *arr;


	str = parser(ac ,av);
	stacks  = fill_stack(str);
	arr = fill_arr(stacks);
	stacks->vars.size = ft_listsize(stacks);
	check_duplicates(arr , stacks->vars.size , stacks);
	arr = bubble_sort(arr , stacks->vars.size);
	stacks->vars.max = grab_max(stacks , arr , stacks->vars.size);
	stacks->vars.min = grab_min(stacks , arr);
	printf("stack_min_value[%d] || stacks_max_value[%d]\n", stacks->vars.min, stacks->vars.max);
	// 	int i = 0;
	// 	while (i < ft_listsize(stacks))
	// 	{
		// printf("->%d\n", arr[i++]);
	// 	}
}