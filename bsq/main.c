/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 15:06:09 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/15 11:52:43 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define BUF_SIZE 1

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];
	char	*temp;
	char	*string;

	while (argv[x] != '\0')
	{
	
		fd = open(argv[1], O_RDWR);
		while ((ret = read(fd, buf, BUF_SIZE)))
		{

