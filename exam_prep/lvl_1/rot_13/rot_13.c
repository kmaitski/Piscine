/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 15:28:50 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/15 15:54:04 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int		x;

	x = 0;
	if (argc != 2)
		ft_putchar('\n');
	else
	{
		while (argv[1][x] != '\0')
		{
			if ((argv[1][x] >= 'a' && argv[1][x] <= 'm') || (argv[1][x] >= 'A' && argv[1][x] <= 'M'))
				argv[1][x] = argv[1][x] + 13;
			else if ((argv[1][x] >= 'n' && argv[1][x] <= 'z') || (argv[1][x] >= 'N' && argv[1][x] <= 'Z'))
				argv[1][x] = argv[1][x] - 13;
			ft_putchar(argv[1][x]);
			x++;
		}
		ft_putchar('\n');
	}
	return (0);
}
