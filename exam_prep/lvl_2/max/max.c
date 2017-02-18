/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 22:26:27 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/16 22:51:06 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		max(int *tab, unsigned int len)
{
	int		x;
	int		largest;
	int		templargest;

	x = 0;
	largest = 0;
	templargest = 0;
	while (x < len)
	{
		if (tab[x] > tab[x + 1])
			templargest = tab[x];
		else
			templargest = tab[x + 1];
		if (templargest > largest)
			largest = templargest;
		x++;
	}
	return (largest);
}
