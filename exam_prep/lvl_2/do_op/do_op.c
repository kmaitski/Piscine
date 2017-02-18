/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 12:35:45 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/17 15:42:10 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c);
int		ft_do_op(char *s1, char *s2, char *s3);

int		main(int argc, char **argv)
{
	if (argc != 4)
		ft_putchar('\n');
	else if (argv[2][0] == '/' && argv[3][0] == '0')
		printf("%s", "Cannot divide by zero.\n");
	else if (argv[2][0] == '%' && argv[3][0] == '0')
		printf("%s", "Cannot modulo by zero.\n");
	else
	{
		printf("%d", ft_do_op(argv[1], argv[2], argv[3]));
		printf("\n");
	}
	return (0);
}

int		ft_do_op(char *s1, char *s2, char *s3)
{
	int		x;
	int		y;
	int		result;

	x = atoi(s1);
	y = atoi(s3);
	if (s2[0] == '+')
		result = x + y;
	if (s2[0] == '-')
		result = x - y;
	if (s2[0] == '*')
		result = x * y;
	if (s2[0] == '/')
		result = x / y;
	if (s2[0] == '%')
		result = x % y;
	return (result);
}


void	ft_putchar(char c)
{
	write(1, &c, 1);
}
