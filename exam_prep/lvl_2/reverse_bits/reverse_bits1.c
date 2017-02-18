/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 18:45:11 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/17 19:48:37 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void			ft_putchar(char c);
void			print_bits(unsigned char c);
unsigned char	swap_bits(unsigned char c);

unsigned char	reverse_bits(unsigned char octet)
{
	int				bit;
	unsigned char	result;

	result = 0;
	bit = 128;
	while (bit > 0)
	{
		result = result + (octet % 2) * bit;
		octet>>=1;
		bit = bit / 2;
	}
	return (result);
}

void		print_bits(unsigned char octet)
{
	int		bits;
	
	bits = 128;
	while (bits > 0)
	{
		if (octet & 128)
			ft_putchar('1');
		else
			ft_putchar('0');
		octet<<=1;
		bits = bits / 2;
	}
}

unsigned char	swap_bits(unsigned char octet)
{
	return (octet >> 4 | octet << 4);
}

int			main(void)
{
	print_bits(swap_bits((65)));
	return (0);
}

void		ft_putchar(char c)
{
	write(1, &c, 1);
}
