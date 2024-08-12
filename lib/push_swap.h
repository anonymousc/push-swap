/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessadik <aessadik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 00:51:39 by aessadik          #+#    #+#             */
/*   Updated: 2024/08/13 00:32:49 by aessadik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_data
{
	int				size;
	int				min_pos;
	int				min;

}					t_data;

/* linked_list.c */

typedef struct s_list
{
	t_data			vars;
	int				data;
	struct s_list	*next;
}					t_list;

t_list				*listnew(int data);
void				listaddfront(t_list **stacks, t_list *new);
void				listaddback(t_list **stacks, t_list *new);
int					ft_listsize(t_list *head);
void				free_stack(t_list **stack);
t_list				*listlast(t_list *stack_a);

/* ------------- */

/* helper_functions_2.c */

char				*ft_strjoin(char *s, char *s1);
void				free_arr(int **arr, int size);
void				ft_free(char **str);
long long			ft_atoi(char *str, t_list **stack_a, char **ptr);
char				**splitter(char *s, char c, int i);
size_t				ft_countword(char *s, char c);

/* ------------------- */

/* helper_functions.c */

size_t				ft_strlen(const char *s);
size_t				ft_strlcpy(char *dest, const char *src, size_t size);
char				**ft_split(char *s, char c);
char				*ft_substr(char *s, unsigned int start, size_t len);
char				*ft_strdup(const char *s1);
char				*ft_strchr(const char *s, int c);
void				bubble_sort(int *arr, int size);

/* ------------------- */

/* fillers_sortedarr.c */

int					ft_ranger(int size);
int					*fill_arr(t_list *stack);
int					grab_max(t_list *stacks);
int					grab_min(t_list *stacks);
void				fill_stack(t_list **stacks, char **ptr);

/* --------- */

/* arg_pars.c */ //

// int *bubble_sort(int *arr ,int size);
char				**parser(int ac, char **av);
void				ft_swap(int *first, int *second);
int					check_duplicates(int *arr, int size, t_list *stacks);

/* --------- */

/* algo_utils.c */

void				sort_2(t_list **stack_a);
void				sort_3(t_list **stack_a);
void				sort_4(t_list **stack_a, t_list **stack_b, int *arr);
void				sort_5(t_list **stack_a, t_list **stack_b, int *arr);
int					is_sorted(t_list *stack);

/* ------------- */

void				min_to_top(t_list **stack_a, int arr);

void				swap(t_list **stacks, char *str);
void				rr(t_list **head);
void				rotate(t_list **head, char *str);
void				reverse_rotate(t_list **head, char *str);
void				rrr(t_list **head);
// void ft_check(t_list *stack_a, t_list *stack_b , int len);
void				pb(t_list **stack_a, t_list **stack_b);
void				pa(t_list **stack_a, t_list **stack_b);
void				show_list1(t_list *stack, int howfar);
void				show_list(t_list *stack);
void				main_algo(t_list **stack_a, t_list **stack_b, int *arr);
void				ft_check(t_list *stack_a, t_list *stack_b, int len,
						int *arr);
void				show_arr(int *arr, int len);
void				max_to_top(t_list **stack, int max);
/* definitions to use */

# define MAX_INT 2147483647
# define MIN_INT -2147483648

/* ------------------ */

#endif
