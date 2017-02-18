/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 21:54:25 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/15 21:24:24 by kmaitski         ###   ########.fr       */
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

int		main(int argc, char **argv)
{
	int		x;
	int		y;
	int		z;
	char	letter;
	char	cap;

	x = 0;
	y = 1;
	z = 1;
	letter = 'a';
	cap = 'A';
	if (argc == 2)
	{
		while (argv[1][x] != '\0')
		{
			if (argv[1][x] >= 'a' && argv[1][x] <= 'z')
			{
				y = argv[1][x] - 'a';
				while (y >= 0)
					{
						ft_putchar(argv[1][x]);
						y--;
					}
			}
			else if (argv[1][x] >= 'A' && argv[1][x] <= 'Z')
			{
				y = argv[1][x] - 'A';		
				while (y >= 0)
					{
						ft_putchar(argv[1][x]);
						y--;
					}
			}
			else
				ft_putchar(argv[1][x]);
			x++;
		}
	}
	ft_putchar('\n');
}
