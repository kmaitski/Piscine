/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 05:12:23 by bchin             #+#    #+#             */
/*   Updated: 2016/11/11 12:15:35 by kmaitski         ###   ########.fr       */
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

void	insert(t_btree *tree, int val)
{
	t_btree	*node;

	node = (*btree_create_node(val));
	if (!(*tree))
	{
		*t_btree = node;
		return ;
	}

	if (val < (*tree)->item)
		insert(&(*tree)->left, val);
	else if (val > (*tree)->item)
		insert (&(*tree)->right, val);
}

void	print_list(t_btree *tree)
{
	while (tree)
	{
		ft_putstr(tree->item);
		tree = 

int		main()
{
	struct node *root = btree_create_node(1);
	root->left = b_tree_create_node(2);
	root->right = b_tree_create_node(3);
	root->left->left = b_tree_create_node(4);
	root->left->right = b_tree_create_node(5);
	return(0);
}
