/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvignero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 10:52:57 by rvignero          #+#    #+#             */
/*   Updated: 2016/11/13 17:53:22 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char    *rush03(int row, int column)
{
	int		y;
	int		x;
	int		z;
	char	*compare;

	x = 1;
	y = 1;
	z = 0;
	compare = malloc(sizeof(char) * (row * column) + column);
	while (y <= column)
	{
		x = 0;
		while (x <= row)
		{
			if ((x == 1 && y == 1) || (x == 1 || y == column))
			{
				compare[z] = 'A';
				z++;
			}
			else if ((x == row && y == column && x > 1 && y > 1) || (x == row && y == 1))
			{
				compare[z] = 'C';
				z++;
			}
			else if (x == 1 || x == row || y == 1 || y == column)
			{
				compare[z] = 'B';
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
	}
	compare[z] = '\0';
	return (compare);
}
