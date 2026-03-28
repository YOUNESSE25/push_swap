/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhaouas <yhaouas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 19:21:27 by yhaouas           #+#    #+#             */
/*   Updated: 2026/03/27 19:21:27 by yhaouas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_node_from_to(t_list **from, t_list **to)
{
	t_list	*lst;

	lst = (*from)->next;
	(*from)->next = *to;
	*to = *from;
	*from = lst;
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	if (!*stack_a)
		return ;
	push_node_from_to(stack_a, stack_b);
	write(1, "pb\n", 3);
}

void	pa(t_list **stack_a, t_list **stack_b)
{
	if (!*stack_b)
		return ;
	push_node_from_to(stack_b, stack_a);
	write(1, "pa\n", 3);
}
