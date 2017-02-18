/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvignero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 10:50:09 by rvignero          #+#    #+#             */
/*   Updated: 2016/11/13 16:53:38 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char    *rush00(int row, int column)
{
	int		x;
	int		y;
	int		z;
	char	*compare;

	x = 1;
	y = 1;
	z = 0;
	compare = malloc(sizeof(char) * (row * column) + column);
	while (y <= column)
	{
		while (x <= row)
		{
			if ((x == 1 && y == 1) || (y == column && x == row && x > 1 && y > 1) || (x == row && y == 1) || (x == 1 && y == row))
			{
				compare[z] = 'o';
				z++;
			}
			else if (y == 1 || y == column)
			{
				compare[z] = '-';
				z++;
			}
			else if (x == 1 || x == row)
			{
				compare[z] = '|';
				z++;
			}
			else
			{
				compare[z] = ' ';
				z++;
			}
			x++;
		}
		compare[z] = '\n';
		y++;
		x = 1;
	}
	compare[z] = '\0';
	return (compare);
}
