/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 13:52:00 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/09 21:59:29 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*node;

	node = *begin_list;
	if (*begin_list == 0)
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	while (node->next != 0)
		node = node->next;
	node->next = ft_create_elem(data);
}
