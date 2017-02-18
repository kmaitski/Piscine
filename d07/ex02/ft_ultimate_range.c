/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 17:10:38 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/03 17:38:11 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	*range  = max - min;
	range = malloc(sizeof(array) * x);
	if (min >= max)
		return (0);
	while (min != max)
	{
		range[x] = min;
		min++;
		x--;
	}
	return (range);
}
