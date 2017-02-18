/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhsu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 12:31:53 by yhsu              #+#    #+#             */
/*   Updated: 2016/11/13 17:55:21 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}
int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (1);
		i++;
	}
	return (0);
}

int		ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putnbr(21474);
		ft_putnbr(8364);
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * (-1);
	}
	if (nb < 10)
	{
		ft_putchar(nb + '0');
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
	return (0);
}

void	ft_putresult(char *rush, int x, int y)
{
	ft_putstr(rush);
	ft_putstr("[");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putchar(']');
}
