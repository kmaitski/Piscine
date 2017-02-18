/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 15:03:47 by kmaitski          #+#    #+#             */
/*   Updated: 2016/10/28 00:21:00 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int i, int j, int k, int l, int m)
{
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, &k, 1);
	write(1, &l, 1);
	write(1, &m, 1);
}

void	ft_print_comb(void)
{
	int i, j, k, l, m;
	
	i = '0';
	j = '1';
	k = '2';
	l = ',';
	m = ' ';
	while (i <= '7')
	{
		while (j <= '8')
		{
			while (k <= '9')
			{
				ft_putchar(i, j, k, l, m);
				k++;
			}
			k = '0';
			j++;
		}
		j ='0';
		i++;
	}
}
int		main(void)
{
	ft_print_comb();
	return (0);
}
