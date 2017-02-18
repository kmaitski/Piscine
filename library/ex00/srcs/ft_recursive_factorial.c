/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 18:46:47 by kmaitski          #+#    #+#             */
/*   Updated: 2016/10/29 21:05:49 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb < 13 && nb > 0)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	if (nb == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
