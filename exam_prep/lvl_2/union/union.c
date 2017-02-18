/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 12:08:17 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/16 20:30:52 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
int		ft_union(char *s1);
int		ft_union2(char *s1, char *s2);

int		main(int argc, char **argv)
{
	if (argc != 3)
		ft_putchar('\n');
	else
	{
		ft_union(argv[1]);
		ft_union2(argv[1], argv[2]);
	}
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_union(char *s1)
{
	int		x;
	int		z;

	x = 0;
	z = -1;
	while (s1[x] != '\0')
	{
		while (z < x)
		{
			if (s1[x] == s1[z])
			{
				x++;
				z = 0;
				if (s1[x] == '\0')
				{
					return (0);
				}
			}
			z++;
		}
		z = 0;
		ft_putchar(s1[x]);
		x++;
	}
	return (0);
}

int		ft_union2(char *s1, char *s2)
{
	int		x;
	int		y;
	int		z;

	x = 0;
	y = 0;
	z = -1;
	while (s2[y] != '\0')
	{
		while (z < y)
		{
			if (s2[y] == s2[z])
			{
				y++;
				z = 0;
				if (s2[y] == '\0')
				{
					ft_putchar('\n');
					return (0);
				}
			}
			z++;
		}
		z = 0;
		while (s1[x] != '\0' && s2[y] != '\0')
		{
			if (s1[x] == s2[y])
			{
				y++;
				while (z < y)
				{
					if (s2[y] == s2[z])
					{
						y++;
						z = 0;
						if (s2[y] == '\0')
						{		
							ft_putchar('\n');
							return (0);
						}
					}
					z++;
				}
			}
			x++;
		}
		x = 0;
		ft_putchar(s2[y]);
		y++;
		if (s2[y] == '\0')
		{
			ft_putchar('\n');
			return (0);
		}
	}
	ft_putchar('\n');
	return (0);
}
