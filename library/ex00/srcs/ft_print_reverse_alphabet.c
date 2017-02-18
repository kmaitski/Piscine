/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 20:15:04 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/08 09:05:33 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"

void	ft_print_reverse_alphabet(void)
{
	char c;

	c = 'z';
	while (c >= 'a')
	{
		ft_putchar(c);
		c--;
	}
}
