/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 18:21:51 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/16 18:10:42 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		inter(char *first, char *second);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	if (argc != 3)
		ft_putchar('\n');
	else
		inter(argv[1], argv[2]);
	return (0);
}
	
int		inter(char *first, char *second)
{
	int		x;
	int		y;
	int		z;

	x = 0;
	y = 0;
	z = 0;
	while (first[x] != '\0')
	{
		while (second[y] != '\0')
		{
			while (z < x)
			{
				if (first[x] == first[z])
					x++;
				if (first[x] == '\0')
				{
					ft_putchar('\n');
					return (0);
				}
				else
					z++;
			}
			if (first[x] == second[y])
			{
				ft_putchar(first[x]);
				x++;
				if (first[x] == '\0')
				{
					ft_putchar('\n');
					return (0);
				}
			}
			y++;
		}
		y = 0;
		if (first[x] == '\0')
			return (0);
		else
			x++;
	}
	ft_putchar('\n');
	return (0);
}
