/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 20:34:34 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/01 14:35:46 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		x;
	int		result;
	int		sign;

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
