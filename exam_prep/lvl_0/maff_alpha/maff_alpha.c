/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 18:27:13 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/14 18:31:00 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	if (argc == 1 && argv)
		write(1, "aBcDeFgHiJkLmNoPqRsTuVwXyZ\n", 27);
	return (0);
}
