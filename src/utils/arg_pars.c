/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_pars.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 00:51:56 by aessadik          #+#    #+#             */
/*   Updated: 2024/08/03 19:30:46 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/push_swap.h"


char **parser(int ac , char  **av)
{
	char	**s;
	char	*s1;
	int		j;

	if (ac == 1)
		exit(0);
	j = 1;
	s1 = ft_strjoin(ft_strdup(av[j++]), ft_strdup(" "));
	while (av[j])
	{
		if (av[j][0] == '\0')
		{
			free(s1);
			write(1 , "Error\n" , 7);
			exit (1);
		}
		s1 = ft_strjoin(s1, ft_strjoin(ft_strdup(av[j]), ft_strdup(" ")));
		j++;
	}
	s = ft_split(s1, ' ');
	free(s1);
	return s;  
}
void ft_swap(int *first, int *second)
{
	int temp;

	temp = *first;
	*first = *second;
	*second  = temp;
}
int *bubble_sort(int *arr ,int size)
{

	int i;
	int j;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (arr[j] > arr[j + 1])
				ft_swap(&arr[j] , &arr[j + 1]);
			j++;
		}
		i++;
	}
	return (arr);
}

int check_duplicates(int *arr, int size , t_list *stacks)
{
	int i;
	int j;

	i = 0;
	(void)stacks;
	while (i < size)
	{
		j = 0;
		while (j < size - i)
		{
			if (arr[j] == arr[j + 1])
			{
				write(1 , "Error\n" , 7);
				return 0;
				// exit (1);
			}
			j++;
		}
		i++;	
	}
	return 1;
}
