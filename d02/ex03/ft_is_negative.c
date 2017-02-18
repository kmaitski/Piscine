/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 11:34:50 by kmaitski          #+#    #+#             */
/*   Updated: 2016/10/27 20:22:04 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_is_negative(int n)
{
	char c;

	if (n >= 0)
	{
		c = 'P';
		ft_putchar(c);
	}
	else
	{
		c = 'N';
		ft_putchar(c);
	}
}

int		main(void)
{
	ft_is_negative(2);
	ft_putchar('\n');
	return (0);
}
