/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 19:16:51 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/09 22:06:16 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *first;
	t_list *store;

	store = *begin_list;
	first = ft_create_elem(data);
	if (*begin_list)
	{
		*begin_list = first;
		first->next = store;
	}
}
