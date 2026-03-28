/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_of_sort1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhaouas <yhaouas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 19:20:38 by yhaouas           #+#    #+#             */
/*   Updated: 2026/03/28 10:35:54 by yhaouas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	func_sort3(t_list **stack_a)
{
	int	numb_1;
	int	numb_2;
	int	numb_3;

	numb_1 = (*stack_a)->content;
	numb_2 = (*stack_a)->next->content;
	numb_3 = (*stack_a)->next->next->content;
	if (numb_1 > numb_2 && numb_1 < numb_3)
		sa(stack_a);
	if (numb_2 < numb_1 && numb_2 > numb_3)
	{
		sa (stack_a);
		rra(stack_a);
	}
	if (numb_3 > numb_2 && numb_3 < numb_1)
		ra(stack_a);
	if (numb_3 < numb_2 && numb_3 > numb_1)
	{
		sa (stack_a);
		ra (stack_a);
	}
	if (numb_1 > numb_3 && numb_1 < numb_2)
		rra (stack_a);
}

void	func_sort5(t_list **stack_a, t_list **stack_b)
{
	if (len_lst(*stack_a) == 4)
	{
		push_stack_inder5(stack_a, stack_b, find_min_cont((*stack_a)), 1);
		func_sort3(stack_a);
		pa(stack_a, stack_b);
	}
	else if (len_lst(*stack_a) == 5)
	{
		push_stack_inder5(stack_a, stack_b, find_min_cont((*stack_a)), 0);
		push_stack_inder5(stack_a, stack_b, find_min_cont((*stack_a)), 1);
		func_sort3(stack_a);
		pa(stack_a, stack_b);
		pa(stack_a, stack_b);
	}
}

int	find_min_cont(t_list *stack_a)
{
	int		min;
	int		i;
	int		j;

	min = stack_a->content;
	i = 1;
	j = 1;
	while (stack_a)
	{
		if (min > stack_a->content)
		{
			j = i;
			min = stack_a->content;
		}
		i++;
		stack_a = stack_a->next;
	}
	return (j);
}

void	push_stack_inder5(t_list **stack_a, t_list **stack_b, int min, int flag)
{
	if (min == (5 - flag))
	{
		rra(stack_a);
		pb(stack_a, stack_b);
	}
	else if (min == 4 && flag == 0)
	{
		rra(stack_a);
		rra(stack_a);
		pb(stack_a, stack_b);
	}
	else if (min == 3)
	{
		ra(stack_a);
		sa(stack_a);
		pb(stack_a, stack_b);
	}
	else if (min == 2)
	{
		sa(stack_a);
		pb(stack_a, stack_b);
	}
	else if (min == 1)
		pb(stack_a, stack_b);
}
