/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_of_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhaouas <yhaouas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 19:20:28 by yhaouas           #+#    #+#             */
/*   Updated: 2026/03/28 10:36:45 by yhaouas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	it_sort(t_list *lst)
{
	while (lst->next)
	{
		if (lst->content > lst->next->content)
			return (0);
		lst = lst->next;
	}
	return (1);
}

void	type_of_sort(t_list **stack_a, t_list	**stack_b)
{
	if (len_lst(*stack_a) == 5 || len_lst(*stack_a) == 4)
		func_sort5(stack_a, stack_b);
	else if (len_lst(*stack_a) == 3)
		func_sort3(stack_a);
	else if (len_lst(*stack_a) == 2)
		sa (stack_a);
	else
	{
		if (len_lst(*stack_a) <= 100)
			push_to_b(stack_a, stack_b, 11);
		else if (len_lst(*stack_a) > 100)
			push_to_b(stack_a, stack_b, 37);
		push_to_a(stack_a, stack_b);
	}
}
