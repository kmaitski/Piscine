/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 17:20:43 by amao              #+#    #+#             */
/*   Updated: 2016/10/30 22:06:08 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	rush(int x, int y)
{
	int a;
	int b;

	a = 1;
	b = 1;
	while (b <= y)
	{
		while (a <= x)
		{
			if ((a == 1 && b == 1) || (a == x && b == y && a > 1 && b > 1))
				ft_putchar('/');
			else if ((a == x && b == 1) || (a == 1 && b == y))
				ft_putchar('\\');
			else if (a == 1 || a == x || b == 1 || b == y)
				ft_putchar('*');
			else
				ft_putchar(' ');
			a++;
		}
		ft_putchar('\n');
		b++;
		a = 1;
	}
}
