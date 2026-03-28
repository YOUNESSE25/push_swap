/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_lnkdlst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhaouas <yhaouas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 19:20:22 by yhaouas           #+#    #+#             */
/*   Updated: 2026/03/27 19:37:41 by yhaouas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	len_lst(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst ->next;
	}
	return (i);
}

t_list	*lst_new(int content, int ind)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->index = ind;
	new_node->next = NULL;
	return (new_node);
}

void	lst_add_back(t_list **lst, t_list *new)
{
	t_list	*node;

	if (lst)
	{
		node = lst_last(*lst);
		if (node)
		{
			node->next = new;
		}
		else
			*lst = new;
	}
}

t_list	*lst_last(t_list *lst)
{
	while (lst)
	{
		if (!(lst->next))
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}
