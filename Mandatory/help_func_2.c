/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help_func_3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhaouas <yhaouas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 19:20:55 by yhaouas           #+#    #+#             */
/*   Updated: 2026/03/28 09:34:27 by yhaouas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*pointer;
	char	*pointer_to_return;

	len_s1 = 0;
	len_s2 = 0;
	if (s1 != NULL)
		len_s1 = ft_strlen(s1);
	if (s2 != NULL)
		len_s2 = ft_strlen(s2);
	pointer = (char *)malloc(len_s2 + len_s1 + 1);
	pointer_to_return = pointer;
	if (!pointer)
		return (NULL);
	while (s1 != NULL && *s1)
		*pointer++ = *s1++;
	while (s2 != NULL && *s2)
		*pointer++ = *s2++;
	*pointer = '\0';
	return (pointer_to_return);
}

int	nbr_range(const char *s)
{
	long long	nbr;
	int			sign;

	nbr = 0;
	sign = 1;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign = -1;
		s++;
	}
	if (*s < '0' || *s > '9')
		return (0);
	while (*s && (*s >= '0' && *s <= '9'))
	{
		nbr = nbr * 10 + (*s - '0');
		s++;
		if ((sign * nbr) > 2147483647 || (sign * nbr) < -2147483648)
			return (0);
	}
	if (*s)
		return (0);
	return (1);
}

int	check_space_end(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		if (argv[i][0] == '\0')
			return (0);
		while (argv[i][j])
		{
			while (argv[i][j] == ' ')
				j++;
			if (argv[i][j] == '\0')
				return (0);
			if (argv[i][j] != ' ')
				break ;
		}
		i++;
	}
	return (1);
}

void	free_stack(t_list **stack)
{
	t_list	*tmp;

	while (*stack)
	{
		tmp = (*stack)->next;
		free((*stack));
		*stack = tmp;
	}
	*stack = NULL;
}

void	handl_err_and_free(char **c)
{
	free(*c);
	write(2, "Error\n", 6);
	exit(1);
}
