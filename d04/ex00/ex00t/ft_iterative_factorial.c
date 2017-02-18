/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 16:14:36 by kmaitski          #+#    #+#             */
/*   Updated: 2016/10/29 22:03:08 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int results;

	if (nb == 0)
	{
		return (1);
	}
	if (nb > 12)
	{
		return (0);
	}
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 1)
	{
		results = results * (nb - 1);
		nb--;
	}
	return (results);
}

int		main(void)
{
	printf("%d\n", ft_iterative_factorial(-4));
	return (0);
}
