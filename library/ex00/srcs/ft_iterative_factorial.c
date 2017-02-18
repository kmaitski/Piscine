/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 18:38:04 by kmaitski          #+#    #+#             */
/*   Updated: 2016/10/29 22:14:57 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	results = nb;
	while (nb > 1)
	{
		results = results * (nb - 1);
		nb--;
	}
	return (results);
}
