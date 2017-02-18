/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 11:01:19 by kmaitski          #+#    #+#             */
/*   Updated: 2016/10/28 11:53:00 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(int i)
{
	write(1, &i, 1);
	return (0);
}

void	ft_print_number(void)
{
	int i;

	i = '0';
	while (i <= '9')
	{
		ft_putchar(i);
		i++;
	}
}

int		main(void)
{
	ft_print_number();
	ft_putchar('\n');
	return (0);
}
