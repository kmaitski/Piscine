/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 18:45:04 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/08 08:59:17 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	ft_am(int hour)
{
	char	*str2;
	char	*str3;

	str2 = ".00 A.M. AND ";
	str3 = ".00 A.M..";
	if (hour != 24)
	{
		printf("%d", hour);
		printf("%s", str2);
		printf("%d", hour + 1);
		printf("%s", str3);
	}
	else
	{
		printf("%d", hour - 12);
		printf("%s", str2);
		printf("%d", 1);
		printf("%s", str3);
	}
}

void	ft_am_pm(int hour)
{
	char	*str4;
	char	*str2;

	str2 = ".00 A.M. AND ";
	str4 = ".00 P.M..";
	printf("%d", hour);
	printf("%s", str2);
	printf("%d", hour + 1);
	printf("%s", str4);
}

void	ft_pm(int hour)
{
	char	*str4;
	char	*str5;

	str4 = ".00 P.M..";
	str5 = ".00 P.M. AND ";
	printf("%d", hour - 12);
	printf("%s", str5);
	printf("%d", (hour + 1) - 12);
	printf("%s", str4);
}

void	ft_pm_am(int hour)
{
	char	*str4;
	char	*str3;

	str4 = ".00 P.M..";
	str3 = ".00 A.M..";
	printf("%d", hour - 12);
	printf("%s", str4);
	printf("%d", (hour + 1) - 12);
	printf("%s", str3);
}

void	ft_takes_place(int hour)
{
	char	*str1;

	str1 = "THE FOLLOWING TAKES PLACE BETWEEN ";
	printf("%s", str1);
	if (hour < 11 || hour == 24)
	{
		ft_am(hour);
	}
	if (hour == 11)
	{
		ft_am_pm(hour);
	}
	if (hour > 11 && hour < 23)
	{
		ft_pm(hour);
	}
	if (hour == 23)
	{
		ft_pm_am(hour);
	}
}
