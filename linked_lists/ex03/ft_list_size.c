/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 20:43:26 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/09 21:02:13 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	t_list	*node;
	int		count;

	count = 0;
	node = begin_list;
	while (node->next != 0)
	{
		node = node->next;
		count++;
	}
	return (count + 1);
}
