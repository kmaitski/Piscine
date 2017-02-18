/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 21:18:40 by kmaitski          #+#    #+#             */
/*   Updated: 2016/10/29 22:14:07 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int	results;

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
		results = results * nb;
		power--;
	}
	return (results);
}
