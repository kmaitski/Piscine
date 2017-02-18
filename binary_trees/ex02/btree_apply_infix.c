/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 12:51:07 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/11 13:23:08 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (root == NULL)
		return ;
	btree_apply_infix(root->left, applyf);
	applyf(root);
	btree_apply_infix(root->right, applyf);
}
