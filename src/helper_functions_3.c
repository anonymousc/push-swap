/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_functions_3.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 02:42:09 by aessadik          #+#    #+#             */
/*   Updated: 2024/08/03 02:48:09 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"

char	**ft_split(char *s, char c)
{
	int		i;
	char	**lst;

	i = 0;
	if (!s)
		return (NULL);
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
