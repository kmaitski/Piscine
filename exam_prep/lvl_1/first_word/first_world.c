/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_world.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 15:58:02 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/15 16:28:17 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		ft_putchar('\n');
	else
	{
		int		x;

		x = 0;
		while (argv[1][x] < 33 && argv[1][x] != '\0')
			x++;
		while ((argv[1][x] >= 33))
		{
			ft_putchar(argv[1][x]);
			x++;
		}
		ft_putchar('\n');
	}
	return (0);
}
