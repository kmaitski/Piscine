/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 21:20:43 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/16 22:24:43 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	alpha_mirror(char *str);

int		main(int argc, char **argv)
{
	if (argc != 2)
		ft_putchar('\n');
	else
		alpha_mirror(argv[1]);
	return (0);
}

void	alpha_mirror(char *str)
{
	int		x;
	int		dist;

	x = 0;
	dist = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 'a' && str[x] <= 'm')
		{
			dist = (109 - str[x]) * 2 + 1;
			ft_putchar(dist + str[x]);
		}
		else if (str[x] >= 'A' && str[x] <= 'M')
		{
			dist = (77 - str[x]) * 2 + 1;
			ft_putchar(dist + str[x]);
		}
		else if (str[x] >= 'n' && str[x] <= 'z')
		{
			dist = (110 - str[x]) * 2 - 1;
			ft_putchar(dist + str[x]);
		}
		else if (str[x] >= 'N' && str[x] <= 'Z')
		{
			dist = (78 - str[x]) * 2 - 1;
			ft_putchar(dist + str[x]);
		}
		else
			ft_putchar(str[x]);
		x++;
	}
	ft_putchar('\n');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
