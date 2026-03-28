/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing_func.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhaouas <yhaouas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 19:21:04 by yhaouas           #+#    #+#             */
/*   Updated: 2026/03/28 09:51:06 by yhaouas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	indexing_stack(t_list *stack)
{
	t_list	*lst_1;
	t_list	*lst_2;

	lst_1 = stack;
	while (lst_1)
	{
		lst_1 -> index = 1;
		lst_2 = stack;
		while (lst_2)
		{
			if (lst_1 -> content > lst_2 -> content)
				lst_1 -> index += 1;
			lst_2 = lst_2 -> next;
		}
		lst_1 = lst_1 -> next;
	}
}

int	find_high_index(t_list *stack)
{
	int		high_ind;
	t_list	*tmp;

	tmp = stack;
	high_ind = tmp->index;
	while (tmp)
	{
		if (tmp->index > high_ind)
			high_ind = tmp->index;
		tmp = tmp->next;
	}
	return (high_ind);
}

int	it_is_high_index(t_list **stack_b, int high)
{
	int		i;
	int		size;
	t_list	*tmp;

	size = len_lst(*stack_b);
	tmp = *stack_b;
	i = 0;
	while (tmp && i < size / 2)
	{
		if (tmp->index == high)
		{
			return (1);
		}
		i++;
		tmp = tmp->next;
	}
	return (0);
}
