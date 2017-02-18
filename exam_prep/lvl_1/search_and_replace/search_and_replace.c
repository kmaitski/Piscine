/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 14:13:23 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/15 14:59:39 by kmaitski         ###   ########.fr       */
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
	if (argc == 4 && argv[2][1] == '\0' && argv[3][1] == '\0')
	{
		int		x;

		x = 0;
		while (argv[1][x] != '\0')
		{
			if (argv[1][x] == argv[2][0])
				argv[1][x] = argv[3][0];
			x++;
		}
		ft_putstr(argv[1]);
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
}
