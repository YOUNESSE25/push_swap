/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhaouas <yhaouas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 19:20:59 by yhaouas           #+#    #+#             */
/*   Updated: 2026/03/29 14:54:21 by yhaouas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	str_len(char const *s, char c)
{
	int	ind;

	ind = 0;
	while (*s && !(*s == c))
	{
		ind++;
		s++;
	}
	return (ind);
}

static int	cont_worde(const char *s, char c)
{
	int	ind;
	int	cont;

	ind = 0;
	cont = 0;
	while (s[ind] == c)
		ind++;
	while (s[ind])
	{
		if (((s[ind] != c) && (s[ind + 1] == c))
			|| ((s[ind] != c) && (s[ind + 1] == 0)))
			cont++;
		ind++;
	}
	return (cont);
}

static char	*alloc_fil(char const **s, char c)
{
	char	*pointer;
	int		len;
	int		ind;

	ind = 0;
	while (**s == c)
		*s += 1;
	len = str_len(*s, c);
	pointer = (char *)malloc(len + 1);
	if (!pointer)
		return (NULL);
	while (**s && !(**s == c))
	{
		pointer[ind++] = **s;
		*s += 1;
	}
	pointer[ind] = 0;
	return (pointer);
}

char	**ft_split(char const *s, char c)
{
	char	**pointer;
	int		words;
	int		ind;

	ind = 0;
	if (!s || !*s)
		return (calloc(1, sizeof(char *)));
	words = cont_worde(s, c);
	pointer = (char **)malloc((words + 1) * sizeof(char *));
	if (!pointer)
		return (NULL);
	while (ind < words)
	{
		pointer[ind] = alloc_fil(&s, c);
		if (!pointer[ind])
		{
			while (ind + 1)
				free(pointer[--ind]);
			free(pointer);
			return (0);
		}
		ind++;
	}
	pointer[ind] = 0;
	return (pointer);
}
