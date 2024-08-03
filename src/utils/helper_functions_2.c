/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_functions_2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 19:10:18 by aessadik          #+#    #+#             */
/*   Updated: 2024/08/03 19:42:42 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/push_swap.h"

char	*ft_strjoin(char *s, char *s1)
{
	char	*p;
	char	*str;
	int		i;

	i = 0;
	if (!s && !s1)
		return (NULL);
	p = (char *)malloc(ft_strlen(s) + ft_strlen(s1) + 1);
	if (!p)
		return (free(s), NULL);
	p[ft_strlen(s) + ft_strlen(s1)] = '\0';
	str = p;
	if (s)
    {
		while (s[i])
			*(p++) = s[i++];
    }
    i = 0;
	if (s1)
		while (s1[i])
			*(p++) = s1[i++];
	free(s);
    free(s1);
	return (str);
}
long ft_atoi(char *str)
{
	long res;
	int sign;
	int i;

	res = 0;
	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;	
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
		res = (res * 10) + str[i++] - '0';
	if (res > INT_MAX || res < INT_MIN || str[i] != '\0')
	{
		write(1, "Error\n" , 7);
		exit(1);
	}
	return (res * sign);
}

void	ft_free(char **str)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str && str[i])
			free(str[i++]);
		free(str);
	}
}

size_t	ft_countword(char *s, char c)
{
	size_t	count;

	if (!*s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

char	**splitter(char *s, char c, int i)
{
	size_t	word_len;
	char	**lst;

	lst = (char **)malloc((ft_countword(s, c) + 1) * sizeof(char *));
	if (!lst)
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				word_len = ft_strlen(s);
			else
				word_len = ft_strchr(s, c) - s;
			lst[i++] = ft_substr(s, 0, word_len);
			if (!lst[i - 1])
				return (ft_free(lst),NULL );
			s += word_len;
		}
	}
	return (lst[i] = NULL,lst);
}
