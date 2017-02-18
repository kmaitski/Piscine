/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 20:29:26 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/15 22:35:48 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		last_word(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int		x;

	x = 0;
	while (str[x] != '\0')
		x++;
	return (x - 1);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		ft_putchar('\n');
	else
		last_word(argv[1]);
}

int		last_word(char *str)
{
	int		x;

	x = ft_strlen(str);
	while (str[x] < 33)
	{
		x--;
		if (x == 0)
		{
			ft_putchar('\n');
			return (0);
		}
	}
		while (str[x] > 32)
			x--;		
		while (str[x] < 33)
		   x++;
		while (str[x] > 32)
		{
			ft_putchar(str[x]);
			x++;
		}
		ft_putchar('\n');
		return (0);
}
