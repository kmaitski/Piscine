/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 20:15:44 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/14 21:00:52 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int		x;

	x = 0;
	while (s1[x] != '\0')
	{
		s2[x] = s1[x];
		x++;
	}
	s2[x] = '\0';
	return (s2);
}

int		main(void)
{
	char dest[10] = "hi";
	char src[10] = "hello";

	printf("%s", ft_strcpy(src, dest));
	return (0);
}
