/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 13:37:59 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/11 13:42:16 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	if (rooot == NULL)
		return ;
	btree_apply_suffix(root->left, applyf);
	btree_apply_suffix(root->right, applyf);
	applyf(root);
}
