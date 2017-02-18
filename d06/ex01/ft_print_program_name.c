/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 17:02:42 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/02 21:32:22 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int		x;

	while (str[x] != '\0')
	{
		ft_putchar(str[x]);
		x++;
	}
}
int		main(int argc, char **argv)
{
	if (argc > 0)
		ft_putstr(argv[0]);
	ft_putchar('\n');
}
