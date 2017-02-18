 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 16:10:59 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/07 19:10:30 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_foreach(int *tab, int length, void(*f)(int));

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_special_case(int nb);

void	ft_special_case(int nb)
{
	ft_putchar('-');
	ft_putchar('2');
	ft_putchar('1');
	ft_putchar('4');
	ft_putchar('7');
	ft_putchar('4');
	ft_putchar('8');
	ft_putchar('3');
	ft_putchar('6');
	ft_putchar('4');
	ft_putchar('8');
	nb = -2147483648;
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		ft_special_case(nb);
	if (nb < 0 && nb > -2147483648)
	{
		nb = nb * -1;
		ft_putchar('-');
	}
	if (nb < 10 && nb > -2147483648)
	{
		ft_putchar(nb + '0');
	}
	else if (nb > 10 && nb <= 2147483647)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
}

int		main(void)
{
	int		tab[10] = { 1, 2, 3, 4, 5, 6 };
	ft_foreach(tab, 3, &ft_putnbr);
	return (0);
}
