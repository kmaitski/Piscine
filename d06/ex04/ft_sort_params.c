/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 21:42:40 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/02 22:52:30 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

void	ft_swp(int *a, int *b)
{
	int		temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int		ft_strcmp(char *s1, char *s2)
{
	int		x;

	x = 0;
	while (s1[x] !='\0' || s2[x] != '\0')
	{
		if (s1[x] != s2[x])
			return (s1[x] -s2[x]);
		x++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	while (argc > 0)
	{
		if (ft_strcmp((argv[argc - 1], argv[argc - 2]) < 0))
			ft_swp(argc[argc - 1], argc[argc -2]);
		argc--;
	}
}
