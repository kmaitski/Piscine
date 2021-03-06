/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 13:18:40 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/06 20:17:11 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		match(char *s1, char *s2)
{
	if (*s2 == 42 && *(s2 + 1) == 42)
		return (match(s1, s2 + 1));
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s2 == 42 && *s1 == '\0' && *(s2 + 1) != '\0')
		return (0);
	if (*s1 == *s2)
		return (match(s1 + 1, s2 + 1) || match(s1 + 1, s2));
	if (*s2 == 42)
		return (match(s1 + 1, s2) || match(s1, s2 + 1));
	return (0);
}
