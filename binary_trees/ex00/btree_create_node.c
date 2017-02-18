/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 22:21:24 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/11 13:37:15 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree	*node;

	node = (t_btree*)malloc(sizeof(t_btree));
	node->left = 0;
	node->right = 0;
	node->item = item;
	return (node);
}
