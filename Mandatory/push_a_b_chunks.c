/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a_b_chunks.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhaouas <yhaouas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 19:21:22 by yhaouas           #+#    #+#             */
/*   Updated: 2026/03/28 10:37:17 by yhaouas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_to_b(t_list **stack_a, t_list **stack_b, int del)
{
	int	i;

	i = 0;
	while (len_lst(*stack_a) > 0)
	{
		if ((*stack_a)->index <= i)
		{
			pb(stack_a, stack_b);
			i++;
		}
		else if ((*stack_a)->index <= (del + i))
		{
			pb(stack_a, stack_b);
			rb(stack_b);
			i++;
		}
		else
			rra(stack_a);
	}
}

void	push_to_a(t_list **stack_a, t_list **stack_b)
{
	int	high_idx;

	high_idx = find_high_index(*stack_b);
	while (len_lst(*stack_b) > 0)
	{
		if ((*stack_b)->index == high_idx)
		{
			pa(stack_a, stack_b);
			high_idx--;
		}
		else if ((*stack_b)->next->index == high_idx)
		{
			sb(stack_b);
			pa(stack_a, stack_b);
			high_idx--;
		}
		else
		{
			if (it_is_high_index(stack_b, high_idx))
				rb(stack_b);
			else
				rrb(stack_b);
		}
	}
}
