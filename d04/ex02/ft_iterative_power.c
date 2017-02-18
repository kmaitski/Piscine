/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 21:18:40 by kmaitski          #+#    #+#             */
/*   Updated: 2016/10/29 22:02:30 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_power(int nb, int power)
{
	int		results;
	
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	results = 1;
	while (power > 0)
	{
		results  = results * nb;
		power--;
	}
	return (results);
}

int		main(void)
{
	printf("%d\n", ft_iterative_power(-3, 3));
}
