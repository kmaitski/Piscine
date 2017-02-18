/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 17:24:44 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/16 19:15:55 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
int		alpha_mirror(char *str);

int		main(int argc, char **argv)
{
	if (argc != 2)
		ft_putchar('\n');
	else
		alpha_mirror(argv[1]);
	return (0);
}


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		alpha_mirror(char *str)
{
	int		x;
	int		change;
	char	letter;
	char	print;
	char	other;
	char	cap;
	char	ocap;

	x = 0;
	change = 25;
	letter = 'a';
	other = 'n';
	cap = 'A';
	ocap = 'N';
	while (str[x] != '\0')
	{
		while (str[x] <='m' && str[x] >= 'a')
		{
			while (letter <= 'm' && letter >= 'a')
			{
				if (str[x] == letter)
				{
					ft_putchar(letter + change);
					x++;
					letter = 'a';
					break ;
				}
			}
			letter++;
			change = change - 2;
		}
		letter = 'a';
		while (str[x] <='M' && str[x] >= 'A')
		{
			while (cap <= 'M' && cap >= 'A')
			{
				if (str[x] == cap)
				{
					ft_putchar(cap + change);
					x++;
					cap = 'A';
					break ;
				}
			}
			cap++;
			change = change - 2;
		}
		cap = 'A';
		while (str[x] <='z' && str[x] >= 'n')
		{
			while (other <= 'z' && other >= 'n')
			{
				if (str[x] == other)
				{
					ft_putchar(other - change);
					x++;
					other = 'n';
					break ;
				}
			}
			other++;
			change = change - 2;
		}
		other = 'n';
		while (str[x] <='Z' && str[x] >= 'N')
		{
			while (ocap <= 'Z' && ocap >= 'N')
			{
				if (str[x] == ocap)
				{
					ft_putchar(ocap - change);
					x++;
					ocap = 'N';
					break ;
				}
			}
			ocap++;
			change = change - 2;
		}
	}
	ft_putchar('\n');
	return (0);
}
