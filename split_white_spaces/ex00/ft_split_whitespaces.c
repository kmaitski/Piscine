/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 12:13:26 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/04 16:01:48 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
			while (str[x] < 33 && str[x] != '\0')
				x++;
		}
	}
	return (++a);
}

char	*ft_word_copy(char *dest, char *str)
{






char **ft_split_whitespaces(char *str)
{
	char **dest;
	int	a;
	int	b;

	a = 0;
	b = 0;
	dest = (char**)malloc(sizeof(*dest) * (ft_count_breaks(str) + 1));
	dest[a][b] 
