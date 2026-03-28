/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb_func.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhaouas <yhaouas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 19:21:46 by yhaouas           #+#    #+#             */
/*   Updated: 2026/03/28 10:32:16 by yhaouas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rev_rotate_func(t_list **ptr)
{
	t_list	*last;

	last = lst_last(*ptr);
	last->next = *ptr;
	while ((*ptr)->next != last)
		*ptr = (*ptr)->next;
	(*ptr)->next = NULL;
	*ptr = last;
}

void	rra(t_list **stack_a)
{
	if (!*stack_a)
		return ;
	rev_rotate_func(stack_a);
	write(1, "rra\n", 4);
}

void	rrb(t_list **stack_b)
{
	if (!*stack_b)
		return ;
	rev_rotate_func(stack_b);
	write(1, "rrb\n", 4);
}
