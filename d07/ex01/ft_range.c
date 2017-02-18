/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 12:09:10 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/03 21:38:51 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int				*range;
	unsigned int	x;
	

	x = max - min;
	range = malloc(sizeof(range) * x);
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
