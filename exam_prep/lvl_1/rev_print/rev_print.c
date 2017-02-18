/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 23:26:12 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/15 10:48:05 by kmaitski         ###   ########.fr       */
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

int		ft_strlen(char *str)
{
	int		x;
	int		y;

	x = 0;
	y = 0;
	while (str[x] != '\0')
	{
		y++;
		x++;
	}
	return (y - 1);
}

int		main(int argc, char **argv)
{
	char	dest[100];
	int		x;
	int		y;

	x = 0;
	if (argc == 2)
	{
		y = ft_strlen(argv[1]);
		while (y >= 0)
		{
			dest[x] = argv[1][y];
			x++;
			y--;
		}
		dest[x] = '\0';
		ft_putstr(dest);
		return (0);
	}
	else
		ft_putchar('\n');
		return (0);
}		
