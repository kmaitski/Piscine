/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 08:27:42 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/08 11:11:46 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **tab, int (*f)(char*))
{
	int		x;

	x = 0;
	while (tab[x])
	{
		if (f(tab[x]) == 1)
			return (1);
		x++;
	}
	return (0);
}