/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 21:15:07 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/09 23:36:27 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*first;

	first = *begin_list;
	if (*begin_list == 0)
		*begin_list = ft_create_elem(data);

	first = ft_create_elem(data);
	while (first->next != 0)
		first = first->next;
	first->next = ft_create_elem(data);
}

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*node;

	if (ac > 1)
	{
		while (av[ac] != '\0')
		{
		   	ft_list_push_back(&node, av);
			ac--;
			node = ft_create_elem(av[ac]);
		}
	}
	return (node);
}
