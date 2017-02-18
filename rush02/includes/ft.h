/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvignero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 13:30:14 by rvignero          #+#    #+#             */
/*   Updated: 2016/11/13 18:37:22 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>

int		ft_strcmp(char *s1, char *s2);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_putnbr(int nb);
void	ft_putresult(char *rush, int x, int y);
int		ft_atoi(char *str);
char	*rush00(int x, int y);
char	*rush01(int x, int y);
char	*rush02(int x, int y);
char	*rush03(int x, int y);
char	*rush04(int x, int y);


#endif
