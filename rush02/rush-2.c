/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_str_cmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 12:51:56 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/13 18:13:44 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
# define BUF_SIZE 1

void	tab_str_cmp(char *store, int row, int column)
{
	int		more;

	more = 0;
	if (ft_strcmp(store, rush00(row, column)) == 0)
	{
		ft_putresult("[rush-00]", row, column);
		more++;
	}
	if (ft_strcmp(store, rush01(row,column)) == 0)
	{
		if (more > 0)
			ft_putstr(" || ");
		ft_putresult("[rush-01]", row, column);
		more++;
	}
	if (ft_strcmp(store, rush02(row, column)) == 0)
	{
		if (more > 0)
			ft_putstr(" || ");
		ft_putresult("[rush-02]", row, column);
		more++;
	}
	if (ft_strcmp(store, rush03(row, column)) == 0)
	{
		if (more > 0)
			ft_putstr(" || ");
		ft_putresult("[rush-03]", row, column);
		more++;
	}
	if (ft_strcmp(store, rush04(row, column)) == 0)
	{
		if (more > 0)
			ft_putstr(" || ");
		ft_putresult("[rush-04]", row, column);
		more++;
	}
	if (more==0)
		ft_putstr("No matches\n");
}

int		main(void)
{
		int		x;
		char	buf[BUF_SIZE + 1];
		int		y;
		int		z;
		char	*store;
		int		ret;

		x = 0;
		y = 0;
		z = 0;
		store = (char *)malloc(BUF_SIZE);
		while ((ret = read(0, buf, BUF_SIZE)))
		{
			if (buf[0] == '\n')
				y++;
			if (buf[0] != '\n')
				x++;
			buf[ret] = '\0';
			store[z] = buf[0];
			z++;
		}
		store[z] = '\0';
		if (y > 0)
			x = x / y;
		tab_str_cmp(store, x, y);
		return (0);
}
