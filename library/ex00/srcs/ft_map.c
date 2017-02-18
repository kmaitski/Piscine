/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 19:02:10 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/08 09:15:08 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		x;
	int		*array;

	array = (int*)malloc(sizeof(int) * length);
	x = 0;
	while (x < length)
	{
		array[x] = f(tab[x]);
		x++;
	}
	return (array);
}
