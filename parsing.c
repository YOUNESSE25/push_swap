/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhaouas <yhaouas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 10:05:49 by yhaouas           #+#    #+#             */
/*   Updated: 2026/03/29 14:50:51 by yhaouas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <string.h>
#include <stdio.h>

int	digit_check(char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (ft_is_digit(argv[i][j]) == 0 && argv[i][0] != '-'
					&& argv[i][0] != '+')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	dup_check(char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (argv[i])
	{
		j = i + 1;
		while (argv[j])
		{
			if (ft_atoi(argv[j]) == ft_atoi(argv[i]))
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

static char	**args_mount(int argc, char **argv)
{
	int		i;
	char	*s;
	char	**lst;

	i = 1;
	s = ft_strdup("");
	if (!s)
		handl_err_and_free(&s);
	while (i < argc)
	{
		s = ft_strjoin(s, argv[i++]);
		if (!s)
			handl_err_and_free(&s);
		s = ft_strjoin(s, " ");
		if (!s)
			handl_err_and_free(&s);
	}
	lst = ft_split(s, ' ');
	free(s);
	return (lst);
}

static int	stack_creating(t_list **stack_a, char **argv)
{
	t_list	*lst;
	int		i;

	i = 0;
	while (argv[i])
	{
		lst = lst_new(ft_atoi(argv[i]), -1);
		if (!lst)
		{
			return (0);
		}
		lst_add_back(stack_a, lst);
		i++;
	}
	return (1);
}

int	parsing(t_list **stack_a, int argc, char **argv)
{
	int	ind;

	ind = 0;
	if (check_space_end(argc, argv) == 0)
		return (0);
	argv = args_mount(argc, argv);
	if (!argv)
		return (0);
	while (argv[ind])
	{
		if (!nbr_range(argv[ind]))
		{
			free_func(argv);
			return (0);
		}
		ind++;
	}
	if (!dup_check(argv) || !digit_check(argv))
	{
		free_func(argv);
		return (0);
	}
	ind = stack_creating(stack_a, argv);
	free_func(argv);
	return (ind);
}
