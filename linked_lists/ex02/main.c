/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 05:12:23 by bchin             #+#    #+#             */
/*   Updated: 2016/11/09 20:38:56 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

int		ft_list_size(t_list *begin_list);
int		ft_putnbr(char *str);
void	ft_putstr(char *str);
void	ft_list_push_back(t_list **begin_list, void *data);
void	ft_list_push_front(t_list **begin_list, void *data);



void	print_list(t_list *list)
{
	while (list)
	{
		ft_putstr(list->data);
		list = list->next;
	}
}

t_list *add_link(t_list *list, void *data)
{
	t_list *tmp;

	tmp = malloc(sizeof(t_list));
	if (tmp)
	{
		tmp->data = data;
		tmp->next = list;
	}
	return (tmp);
}

t_list *ft_create_elem(void *data)
{
	t_list *new;

	new = malloc(sizeof(t_list));
	if (new)
	{
		new->data = data;
		new->next = NULL;
	}
	return (new);
}


int		main()
{
	t_list *list;

	list = NULL;

	list = add_link(list, "toto\n");
	list = add_link(list, "toto\n");
	list = add_link(list, "toto\n");

	ft_list_push_front(&list, "bye");

	print_list(list);
	return(0);
}
