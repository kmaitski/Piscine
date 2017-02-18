/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 17:54:53 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/15 18:20:44 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *src)
{
	int		x;

	x = 0;
	while (src[x] != '\0')
		x++;
	return (x);
}

char	*ft_strdup(char *src)
{
	int		x;
	char	*dest;

	x = 0;
	dest = malloc(sizeof(char) * ft_strlen(src) + 1);
	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	printf("%s", dest);
	return (dest);
}

int		main(void)
{
	char	*src;

	src = "hello";
	printf("%s", ft_strdup(src));
	return (0);
}
