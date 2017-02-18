/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   body.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 10:12:46 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/10 18:05:34 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

#define BUF_SIZE 80

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fd = open(argv[1], O_RDONLY);
	if (argc != 2)
		return (ft_error(argc));
	if (fd == -1)
	{
		ft_putstr_error("open () failed \n");
		return (1);
	}
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	if (close(fd) == -1)
	{
		ft_putstr_error("close() failed\n");
		return (1);
	}
	return (0);
}
