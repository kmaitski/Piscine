/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 16:48:04 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/04 16:52:26 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		ft_putchar[x];
		x++;
	}
}

void	ft_generic(void)
{
	char	*str;

	str = "Tu tu tu tu ; Tu tu tu tu";
	ft_putstr(str);
}
