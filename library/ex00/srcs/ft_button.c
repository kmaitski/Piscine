/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_button.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 12:42:57 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/04 16:25:20 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_button(int i, int j, int k)
{
	if (i == j)
		return (i);
	if (j == k)
		return (j);
	if (k == i)
		return (k);
	if (i > j && i < j)
		return (i);
	if (j > i && j < k)
		return (j);
	else
		return (k);
}
