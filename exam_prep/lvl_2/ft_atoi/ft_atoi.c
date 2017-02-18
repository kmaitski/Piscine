/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 17:00:49 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/15 17:53:35 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_atoi(const char *str)
{
	int		x;
	int		result;
	int		sign;

	x = 0;
	result = 0;
	sign = 1;
		while (str[x] < 33)
			x++;
		if (str[x] == '+')
			x++;
		if (str[x] == '-')
		{
			sign = -1;
			x++;
		}
		while (str[x] >= '0' && str[x] <= '9')
		{
			result = result * 10 + str[x] - '0';
			x++;
		}
	return (result * sign);
}

int		main(void)
{
	char *str;

	str = "545646545646546546546548731348685123";
	printf("%d", ft_atoi(str));
	return (0);
}
