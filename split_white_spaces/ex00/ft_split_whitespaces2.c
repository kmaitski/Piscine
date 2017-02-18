/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 18:15:36 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/04 15:07:42 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_word_copy(char *dest, char *str)
{
	int		x;

	while (str[x] != '\0' && str[x] > 32)
	{
		dest[x] = str[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}

int		ft_count_breaks(char *str)
{
	int		x;
	int		a;
	
	x = 0;
	a = 0;
	while (str[x] < 33)
		x++;
	while (str[x] != '\0')
	{
		x++;
		while (str[x] < 33 && str[x] != '\0')
		{
			a++;
			x++;
			while(str[x] > 33 && str[x] != '\0')
				x++;
		}
	}
	return (++a);
}

char **ft_split_whitespaces(char *str)
{
	int 	x;
	int		y;
	int		z;
	int		a;
	char	**dest;

	x = 0;
	y = 0;
	a = 0;
	z = 0;
	dest = (char**)malloc(sizeof(*dest) * (ft_count_breaks(str) + 1));
	while (str[x] > 32)
	{
		if (str[x] < 33 && str[x] != '\0')
		{
			x = x - y;
			while (y != x)
			{
				dest[z][a] = str[x];
				x++;
				a++;
			}
		}
	}
	y = 0;
	while (str[x] < 33)
		x++;
		while (str[x] > 32)
		{
			x++;
			y++;
			if (str[x] < 33 && str[x] != '\0')
			{
				z++;
				x++;
			}
		}
		y = 0;
	return(*dest);
}

int		main(void)
{
	char *str = "abc cde efg";

	ft_split_whitespaces(str);
}
