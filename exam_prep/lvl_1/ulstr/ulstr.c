/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 15:01:23 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/15 15:17:59 by kmaitski         ###   ########.fr       */
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
	if (argc == 2)
	{
		while (argv[1][x] != '\0')
		{
			if (argv[1][x] >= 'a' && argv[1][x] <= 'z')
				argv[1][x] = argv[1][x] - 32;
			else if (argv[1][x] >= 'A' && argv[1][x] <= 'Z')
				argv[1][x] = argv[1][x] + 32;
			ft_putchar(argv[1][x]);
			x++;
		}
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
	return (0);
}
