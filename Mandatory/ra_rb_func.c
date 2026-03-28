/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb_func.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhaouas <yhaouas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 19:21:39 by yhaouas           #+#    #+#             */
/*   Updated: 2026/03/28 10:32:33 by yhaouas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate_func(t_list **stack_ptr)
{
	t_list	*ptr;

	ptr = lst_last(*stack_ptr);
	ptr->next = *stack_ptr;
	*stack_ptr = (*stack_ptr)->next;
	ptr->next->next = NULL;
}

void	ra(t_list **stack_a)
{
	if (!*stack_a)
		return ;
	rotate_func(stack_a);
	write(1, "ra\n", 3);
}

void	rb(t_list **stack_b)
{
	if (!*stack_b)
		return ;
	rotate_func(stack_b);
	write(1, "rb\n", 3);
}
