/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elm.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 09:28:21 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/09 18:55:12 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list		*ft_create_elm(void *data)
{
	t_list *tmp;

	tmp = (t_list*)malloc(sizeof(t_list));
	tmp->data = data;
	tmp->next = NULL;
	return (tmp);
}
