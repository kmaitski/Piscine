/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvignero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 10:51:45 by rvignero          #+#    #+#             */
/*   Updated: 2016/11/13 15:56:02 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char    *rush02(int row, int column)
{
	int		x;
	int		y;
	int		z;
	char	*compare;

	x = 0;
	z = 0;
	compare = malloc(sizeof(char) * (row * column) + column);
	while (x < row)
	{
		y = 0;
		while (y < column)
		{
			if (x == 0 && (y == 0 || y == column))
			{
				compare[z] = 'A';
				z++;
			}
			else if (x == row && (y == 0 || y == column))
			{
				compare[z] = 'C';
				z++;
			}
			else if (x == 0 || x == row || y == 0 || y == column)
			{
				compare[z] = 'B';
				z++;
			}
			else
			{
				compare[z] = ' ';
				z++;
			}
			y++;
		}
		compare[z] = '\n';
		x++;
	}
	compare[z] = '\0';
	return (compare);
}
