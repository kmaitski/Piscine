/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printbits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 16:36:55 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/17 18:36:26 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_bits(unsigned char octet)
{
	int		bit;

	bit = 128;
	while (bit > 0)
	{
		if (octet & 128)
			ft_putchar('1');
		else
			ft_putchar('0');
		octet <<= 1;
		bit = bit / 2;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	print_bits(2);
	return (0);
}
