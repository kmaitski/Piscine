/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 09:40:15 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/16 12:00:38 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		inter(char *s1, char *s2);
void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	if (argc != 3)
		write(1, "\n", 1);
	else
		inter(argv[1], argv[2]);
	return (0);
}

int		inter(char *s1, char *s2)
{
	int		x;
	int		y;
	int		z;

	x = 0;
	y = 0;
	z = -1;
	while (s1[x] != '\0')
	{
		while (s2[y] != '\0')
		{
			while (z < x)
			{
				if (s1[x] == s1[z])
				{
					x++;
					if (s1[x] == '\0')
					{
						ft_putchar('\n');
						return (0);
					}
				}
				z++;
			}
			z = 0;
			if (s1[x] == s2[y])
			{
				ft_putchar(s1[x]);
				x++;
				y = 0;
				if (s1[x] == '\0')
				{
					ft_putchar('\n');
					return (0);
				}
			}
			y++;
		}
		y = 0;
		x++;
	}
	ft_putchar('\n');
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
