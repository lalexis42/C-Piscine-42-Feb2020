/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 13:45:44 by rgilles           #+#    #+#             */
/*   Updated: 2020/02/27 13:45:45 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int *board)
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = board[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

int		ft_absolute_diff(int a, int b)
{
	if (a >= b)
		return (a - b);
	else
		return (b - a);
}

int		is_safe(int nb_queen, int *board)
{
	int i;

	i = 0;
	while (i < nb_queen)
	{
		if (board[nb_queen] == board[i]
			|| ft_absolute_diff(board[nb_queen], board[i]) == (nb_queen - i))
			return (0);
		i++;
	}
	return (1);
}

void	ft_solve(int nb_queen, int *board, int *count)
{
	board[nb_queen] = 0;
	while (board[nb_queen] < 10)
	{
		if (is_safe(nb_queen, board))
		{
			if (nb_queen == 9)
			{
				ft_print(board);
				(*count)++;
			}
			else
				ft_solve(nb_queen + 1, board, count);
		}
		board[nb_queen]++;
	}
}

int		ft_ten_queens_puzzle(void)
{
	int board[10];
	int nb_queen;
	int count;

	count = 0;
	nb_queen = 0;
	ft_solve(nb_queen, board, &count);
	return (count);
}
