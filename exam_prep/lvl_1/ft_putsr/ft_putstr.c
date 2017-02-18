/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 16:31:02 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/15 16:53:29 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		x;

	x = 0;
	while (str[x] != '\0')
	{
		ft_putchar(str[x]);
		x++;
	}
}

int		main(void)
{
	char *str;

	str = "hello";
	ft_putstr(str);
}
