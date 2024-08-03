/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 23:50:50 by aessadik          #+#    #+#             */
/*   Updated: 2024/08/03 19:20:58 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/push_swap.h"


size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s && s[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s);
	while (i <= len)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	char	*s1;
	size_t	l;

	if (!s)
		return (NULL);
	l = ft_strlen(s);
	if (start >= ft_strlen(s))
		return (NULL);
	if (l - start >= len)
		s1 = (char *)malloc((len + 1));
	else
		s1 = (char *)malloc((l - start + 1));
	if (s1 == NULL)
		return (NULL);
	if (len >= LONG_MAX)
		ft_strlcpy(s1, &s[start], l + 1);
	else
		ft_strlcpy(s1, (s + start), (len + 1));
	return (s1);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	srcs;
	size_t	i;

	srcs = ft_strlen(src);
	i = 0;
	if (size != 0)
	{
		while (src[i] && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (srcs);
}
char	*ft_strdup(const char *s1)
{
	char	*s;
	size_t	i;

	i = 0;
	s = (char *)malloc(ft_strlen(s1) + 1);
	if (!s)
		return (NULL);
	while (s1 && *(s1 + i))
	{
		*(s + i) = *(s1 + i);
		i++;
	}
	*(s + i) = '\0';
	return (s);
}