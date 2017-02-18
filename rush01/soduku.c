/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   soduku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaitski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 13:03:19 by kmaitski          #+#    #+#             */
/*   Updated: 2016/11/06 23:08:57 by kmaitski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**get_board(char **argv);
void	print_board(char **board);
char	**ft_mover(char **board, int x, int y);

int		main(int argc, char **argv)
{
	char **board;

	board = get_board(argv);
	if (argc > 1)
	{
		print_board(ft_mover(board, 0, 0));
		return (0);
	}
}
