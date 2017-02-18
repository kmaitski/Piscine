/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvignero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 10:15:31 by rvignero          #+#    #+#             */
/*   Updated: 2016/11/13 17:21:34 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int        ft_atoi(char *str)
{
	int    x;
	int result;
	int sign;

	x = 0;
	sign = 1;
	result = 0;
	while (str[x] < 33)
	{
		x++;
		continue;
	}
	if (str[x] == 45)
	{
		++x;
		sign = -1;
	}
	if (str[x] == 43)
		++x;
	while (str[x] != '\0' && str[x] >= 48 && str[x] <= 57)
	{
		result = result * 10 + str[x] - 48;
		++x;
	}
	return (result * sign);
}

int			main(int argc, char **argv)
{
	int		cols;
	int		rows;

	cols = 0;
	rows = 0;
	if (argc != 3)
		return (0);
	if (argv[1] <= 0 || argv[2] <= 0)
		return (0);
	cols = ft_atoi(argv[1]);
	rows = ft_atoi(argv[2]);
	return (0);
}
