/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 18:44:09 by amao              #+#    #+#             */
/*   Updated: 2016/10/30 21:22:13 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

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
			if ((a == 1 && b == 1) || (b == y && a == x && a > 1 && b > 1) || (a == x && b == 1) || (a == 1 && b == y))
			   ft_putchar('o');
			else if (b == 1 || b == y)
				ft_putchar('-');
			else if (a == 1 || a == x)
				ft_putchar('|');
			else
				ft_putchar(' ');
			a++;
		}
	ft_putchar('\n');
	b++;
	a = 1;
	}
}
