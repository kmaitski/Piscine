/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 17:47:35 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/08 09:13:20 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		ft_putchar(str[x]);
		x++;
	}
}

void	ft_generic(void)
{
	char	*str;

	str = "Tu tu tu tu ; Tu tu tu tu";
	ft_putstr(str);
	ft_putchar('\n');
}

int		main(void)
{
	ft_generic();
}
