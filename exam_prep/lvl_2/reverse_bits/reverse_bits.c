/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 15:53:36 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/17 18:44:54 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	print_bits(unsigned char octet);

unsigned char	reverse_bits(unsigned char octet)
{
	int				x;
	int				bit;
	unsigned char	result;
	
	bit = 128;
	x = 0;
	result = 0;
	while (x < 8)
	{
		result = result + (octet % 2) * bit;
		octet = octet / 2;
		bit = bit / 2;
		x++;
	}
	return (result);
}

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
		print_bits(reverse_bits((128)));
		return (0);
}
