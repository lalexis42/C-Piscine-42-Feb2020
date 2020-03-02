/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place_square.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 19:31:47 by rgilles           #+#    #+#             */
/*   Updated: 2020/02/25 19:31:50 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>

void	place_squaremarks(int maxsquare, t_gridinfo *mygrid)
{
	int i;
	int j;

	i = 0;
	while (i < maxsquare)
	{
		j = 0;
		while (j < maxsquare)
		{
			mygrid->map[mygrid->y_bsq + i][mygrid->x_bsq + j] = mygrid->sqrchr;
			j++;
		}
		i++;
	}
}

void	print_grid(t_gridinfo mygrid)
{
	int i;
	int j;

	i = 1;
	while (i < mygrid.height)
	{
		j = 0;
		while (j < mygrid.width)
		{
			ft_putchar(mygrid.map[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	i = 0;
	while (i < mygrid.height)
	{
		free(mygrid.map[i]);
		i++;
	}
	free(mygrid.map);
}

int		check_square(int size, int x, int y, t_gridinfo mygrid)
{
	int	i;
	int	j;

	i = 0;
	while (i < size && x + i < mygrid.width)
	{
		j = 0;
		while (j < size && y + j < mygrid.height)
		{
			if (mygrid.map[j + y][i + x] != mygrid.empty)
				return (0);
			j++;
		}
		i++;
	}
	if (i == size && j == size)
		return (1);
	else
		return (0);
}

void	trytoplace(t_gridinfo *mygrid, int x, int y, int *maxsquare)
{
	int	size;

	size = 1;
	while (check_square(size, x, y, *mygrid))
		size++;
	size--;
	if (size > *maxsquare)
	{
		*maxsquare = size;
		mygrid->y_bsq = y;
		mygrid->x_bsq = x;
	}
}

void	do_square(t_gridinfo mygrid)
{
	int x;
	int y;
	int	maxsquare;

	y = 1;
	mygrid.x_bsq = 0;
	mygrid.y_bsq = 0;
	maxsquare = 0;
	while (y + maxsquare < mygrid.height)
	{
		x = 0;
		while (x + maxsquare < mygrid.width)
		{
			trytoplace(&mygrid, x, y, &maxsquare);
			x++;
		}
		y++;
	}
	place_squaremarks(maxsquare, &mygrid);
	print_grid(mygrid);
}
