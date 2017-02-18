/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 18:31:32 by kmaitski          #+#    #+#             */
/*   Updated: 2016/10/30 22:01:25 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	rush(int x, int y)
{
	int		a;
	int		b;
	
	a = 1;
	b = 1;
	if ( x < 0 || y < 0)
		return;
	while (b <= y)
	{
		while (a <= x)
		{
			if ((a == 1 && b == 1) || (a == x && b == 1))
				ft_putchar('A');
			else if ((a == 1 && b == y) || (a == x && b == y && a > 1 && a > 1 && b > 1))
				ft_putchar('C');
			else if (b == 1 || a == x || b == y || a == 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			a++;
		}
		ft_putchar('\n');
		b++;
		a = 1;
	}
}
