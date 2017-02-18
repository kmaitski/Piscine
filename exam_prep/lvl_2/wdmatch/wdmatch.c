/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 23:06:56 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/17 10:39:34 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
void	wdmatch(char *s1, char *s2);

int		main(int argc, char **argv)
{
	if (argc != 3)
		ft_putchar('\n');
	else
		wdmatch(argv[1], argv[2]);
}

void	wdmatch(char *s1, char *s2)
{
	int		memory = ft_strlen(s1) + 1;
	int		x;
	int		y;
	int		z;
	char	*temp[memory];

	x = 0;
	y = 0;
	z = 1;
	while (s1[x] != '\0')
	{
		while (s2[y] != '\0')
		{
			if (s1[x] == s2[y])
			{
				temp[z] = s1[x];
				z++;
				break ;
			}
			y++;
		}
		y = 0;
		x++;
	}
	x = 0;
	if (ft_strcmp(s1, temp) == 0)
	{
		while (s1[x] != '\0')
		{
			ft_putchar(s1[x]);
			x++;
		}
	}
	else
		ft_putchar('\n');
}

int		ft_strcmp(char *s1, char *s2)
{
	int		x;

	x = 0;
	while (s1[x] != 0)
	{
		if (s1[x] != s2[x])
			return (s1[x] - s2[x]);
		x++;
	}
	return (0);
}

int		ft_strlen(char *s1)
{
	int		x;

	x = 0;
	while (s1[x] != '\0')
		x++;
	return (x);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
