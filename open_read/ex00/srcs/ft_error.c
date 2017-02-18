/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 17:07:37 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/10 17:25:48 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int		ft_error(int argc)
{
	if (argc == 1)
	{
		ft_putstr_error("File name missing. \n");
		return (1);
	}
	if (argc > 2)
	{
		ft_putstr_error("Too many arguements.\n");
		return (1);
	}
	return (0);
}
