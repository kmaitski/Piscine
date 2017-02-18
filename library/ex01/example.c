/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   example.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 17:04:15 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/07 17:10:36 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

typedef	void	(*funptr)(char);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	funptr		f;

	f = &ft_putchar;
	f('z');
	return (0);
}
