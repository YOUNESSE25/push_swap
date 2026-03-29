/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhaouas <yhaouas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 19:21:09 by yhaouas           #+#    #+#             */
/*   Updated: 2026/03/28 09:52:21 by yhaouas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char	**av)
{
	t_list	*stak_a;
	t_list	*stak_b;

	stak_a = NULL;
	stak_b = NULL;
	if (ac > 1)
	{
		if (parsing(&stak_a, ac, av) == 0)
		{
			free_stack(&stak_a);
			write(2, "Error\n", 6);
			return (1);
		}
		indexing_stack(stak_a);
		if (!it_sort(stak_a))
		{
			type_of_sort(&stak_a, &stak_b);
		}
		free_stack(&stak_a);
		free_stack(&stak_b);
	}
	return (0);
}
