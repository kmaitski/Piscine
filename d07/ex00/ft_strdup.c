/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 09:59:40 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/03 17:11:58 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *src)
{
	int		x;
	int		len;

	x = 0;
	len = 0;
	while (src[x] != '\0')
		x++;
	len = x;
	return (x);
}

char	*ft_strcpy(char *dest, char *src)
{
	int		x;

	x = 0;
	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char 	*dest;

	dest = malloc(sizeof(*src) * (ft_strlen(src) + 1));
	if (dest == '\0')
		return (0);
	ft_strcpy(dest, src);
	return (dest);
}
