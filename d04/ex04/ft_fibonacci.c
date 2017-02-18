/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 22:59:48 by kmaitski          #+#    #+#             */
/*   Updated: 2016/10/29 23:33:06 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (0);
	}
	if (index == 0)
	{
		return (0);
	}
	if (index == 1 || index == 2)
	{
		return (1);
	}
	else
	{
	return ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	}
}

int main(void)
{
	int index;

	index = 4;
	printf("%d", ft_fibonacci(4));
	return (0);
}
