/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 09:59:40 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/08 09:36:11 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strlen.c"

#include "ft_strcpy.c"

#include "../includes/ft.h"

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = malloc(sizeof(*src) * (ft_strlen(src) + 1));
	if (dest == '\0')
		return (0);
	ft_strcpy(dest, src);
	return (dest);
}
