/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 18:47:39 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/09 20:41:42 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

t_list				*ft_create_elem(void *data);

#endif
