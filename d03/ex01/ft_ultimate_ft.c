/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 12:52:32 by kmaitski          #+#    #+#             */
/*   Updated: 2016/10/28 13:30:59 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int main(void)
{
	int		a;
	int		*nbr1;
	int		**nbr2;
	int		***nbr3;
	int		****nbr4;
	int		*****nbr5;
	int		******nbr6;
	int		*******nbr7;
	int		********nbr8;
	int		*********nbr9;

	a = 3;
	nbr1 = &a;
	nbr2 = &nbr1;
	nbr3 = &nbr2;
	nbr4 = &nbr3;
	nbr5 = &nbr4;
	nbr6 = &nbr5;
	nbr7 = &nbr6;
	nbr8 = &nbr7;
	nbr9 = &nbr8;
	ft_ultimate_ft(nbr9);
	printf("%d\n", a );
	return (0);
}
