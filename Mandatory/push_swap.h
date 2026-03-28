/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhaouas <yhaouas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 19:21:32 by yhaouas           #+#    #+#             */
/*   Updated: 2026/03/28 10:31:39 by yhaouas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <limits.h>
# include <unistd.h>

typedef struct s_list
{
	int				index;
	int				content;
	struct s_list	*next;
}					t_list;

t_list	*lst_new(int content, int i);
void	lst_add_back(t_list **lst, t_list *nw);
int		len_lst(t_list *lst);
t_list	*lst_last(t_list *lst);

size_t	ft_strlen(const char *s);
int		ft_is_digit(int k);
int		ft_atoi(const char *s);
char	*ft_strdup(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
char	**ft_split(char const *s, char k);

void	free_func(char **s);
int		check_space_end(int argc, char **argv);
int		nbr_range(const char *s);
void	free_stack(t_list **stack);

int		find_high_index(t_list *s);
int		it_is_high_index(t_list **stack_b, int high);
void	indexing_stack(t_list *stack);
int		parsing(t_list **stack_a, int argc, char **argv);

void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);
void	ra(t_list **stack_a);
void	rb(t_list **stack_b);
void	sa(t_list **stack_a);
void	sb(t_list **stack_b);
void	pb(t_list **stack_a, t_list **stack_b);
void	pa(t_list **stack_a, t_list **stack_b);

int		it_sort(t_list *s_a);
void	func_sort3(t_list **stack_a);
void	func_sort5(t_list **stack_a, t_list	**stack_b);
void	type_of_sort(t_list **stack_a, t_list	**stack_b);
int		find_min_cont(t_list *stack_a);
void	push_stack_inder5(t_list **stack_a,
			t_list **stack_b,
			int minimum,
			int flag);
void	push_to_b(t_list **stack_a, t_list **stack_b, int del);
void	push_to_a(t_list **stack_a, t_list **stack_b);
void	handl_err_and_free(char **c);
#endif
