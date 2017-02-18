/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 09:44:10 by kmaitski          #+#    #+#             */
/*   Updated: 2016/10/29 15:57:42 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int	results;

	results = nb;
	while (nb > 1)
	{
		results =  results * (nb - 1);
		nb--;
	}
	return results;
}

int 	main()
{
	printf("%d\n", ft_iterative_factorial(5));
	return (0);
}
