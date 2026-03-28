/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help_func_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhaouas <yhaouas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 19:20:45 by yhaouas           #+#    #+#             */
/*   Updated: 2026/03/28 09:33:23 by yhaouas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_digit(int c)
{
	if (c <= 57 && c >= 48)
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	unsigned long	n;
	int				singe;

	n = 0;
	singe = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			singe = (-1) * singe;
			str++;
		}
		else
			str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		if (n > ((unsigned long)(LONG_MAX - *str + '0') / 10))
			return (-(singe + 1) / 2);
		n = n * 10 + *str - '0';
		str++;
	}
	return ((int )n * singe);
}

char	*ft_strdup(const char *s1)
{
	char	*pointer;
	int		ind;

	ind = 0;
	pointer = malloc(ft_strlen(s1) + 1);
	if (!pointer)
		return (NULL);
	while (s1[ind])
	{
		pointer[ind] = s1[ind];
		ind++;
	}
	pointer[ind] = '\0';
	return (pointer);
}

void	free_func(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
}

size_t	ft_strlen(const char *s)
{
	size_t	counter;

	counter = 0;
	while (*s)
	{
		counter++;
		s++;
	}
	return (counter);
}
