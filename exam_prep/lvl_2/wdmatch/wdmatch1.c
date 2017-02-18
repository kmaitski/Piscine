/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 10:22:49 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/17 12:25:39 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
int		ft_strlen(char *str);
void	wdmatch(char *s1, char *s2);

int		main(int argc, char **argv)
{
	if (argc != 3)
		ft_putchar('\n');
	else
		wdmatch(argv[1], argv[2]);
	return (0);
}

void	wdmatch(char *s1, char *s2)
{
	int		x;
	int		y;
	int		z;

	x = 0;
	y = 0;
	z = 0;
	while (s1[x] != '\0')
	{
		while (s2[y] != '\0')
		{
			if (s1[x] == s2[y])
			{
					z++;
					break ;
			}
			y++;
		}
		x++;
	}
	if (z == x)
	{
		x = 0;
		while (s1[x] != '\0')
		{
			ft_putchar(s1[x]);
				x++;
		}
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
