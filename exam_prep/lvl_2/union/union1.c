/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 20:07:46 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/16 21:23:29 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_union(char *s1, char *s2);

int		main(int argc, char **argv)
{
	if (argc != 3)
		ft_putchar('\n');
	else
		ft_union(argv[1], argv[2]);
	return (0);
}

void	ft_union(char *s1, char *s2)
{
	int		x;
	int		y;
	int		z;
	int		check;

	x = 0;
	y = 0;
	z = 0;
	check = 0;
	while (s1[x] != '\0')
	{
		while (y < x)
		{
			if (s1[x] == s1[y])
			{
				check = 1;
				break ;
			}
			y++;
		}
		if (check == 0)
			ft_putchar(s1[x]);
		x++;
		check = 0;
		y = 0;
	}
	while (s2[z] != '\0')
	{
		x = 0;
		while (s1[x] != '\0')
		{
			if (s1[x] == s2[z])
			{
				check = 1;
				break ;
			}
			x++;
		}
		while (y < z)
		{
			if (s2[y] == s2[z])
			{
				check = 1;
				break ;
			}
			y++;
		}
		if (check == 0)
			ft_putchar(s2[z]);
		z++;
		check = 0;
		y = 0;
	}
	ft_putchar('\n');
}


void	ft_putchar(char c)
{
	write(1, &c, 1);
}
