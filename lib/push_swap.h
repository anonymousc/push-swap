/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 00:51:39 by aessadik          #+#    #+#             */
/*   Updated: 2024/08/03 00:51:39 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdbool.h>
# include <string.h>


typedef struct s_data{
	int size;
	int max;
	int min;
	
}				t_data;

/* linked_list.c */

typedef struct		s_list{

	t_data	vars;
	int				data;
	struct s_list	*next;
}					t_list;
t_list *listnew(int data);
void listaddfront(t_list **stacks, t_list *new);
void listaddback(t_list **stacks, t_list *new);
int ft_listsize(t_list *head);

/* ------------- */

/* helper_functions_2.c */

char	*ft_strjoin(char *s, char *s1);
void ft_free(char **str);
long ft_atoi(char *str);
char	**splitter(char *s, char c, int i);
size_t	ft_countword(char *s, char c);

/* ------------------- */

/* helper_functions.c */

size_t	ft_strlen(const char *s);
char	*ft_substr(char *s, unsigned int start, size_t len);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
char	*ft_strdup(const char *s1);
char	*ft_strchr(const char *s, int c);
char	**ft_split(char *s, char c);//need to move to an other file

/* ------------------- */

/* fillers_sortedarr.c */

int    ft_ranger(int size);
t_list *fill_stack(char **ptr);
int	*fill_arr(t_list *stack);
int grab_max(t_list *stacks, int *arr, int *size);
int grab_min(t_list *stacks, int *arr);

/* --------- */

/* arg_pars.c */ //

int *bubble_sort(int *arr ,int size);
char **parser(int ac, char  **av);

/* --------- */

void s(t_list **stacks);
void rr(t_list **stacks);

/* definitions to use */

# define MAX_INT 2147483647
# define MIN_INT -2147483648

/* ------------------ */

#endif
