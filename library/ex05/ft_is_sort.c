/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 11:44:31 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/08 16:16:38 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int x;
	int	y;
	int z;

	x = 0;
	y = 0;
	z = 0;
	while (x < (length - 1))
	{
		if (f(tab[x], tab[x + 1]) >= 0)
			y++;
		if (f(tab[x], tab[x + 1]) <= 0)
			z++;
		x++;
	}
	if (y == length - 1 || z == length - 1)
		return (1);
	return (0);
}
