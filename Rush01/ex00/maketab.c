/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maketab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 09:41:37 by rgilles           #+#    #+#             */
/*   Updated: 2020/02/15 09:41:45 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		boite_legale(int box, int tab[4][4], int coord[2], int *consignes);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_tab(int tab[4][4])
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j < 4)
	{
		while (i < 4)
		{
			ft_putchar((char)(tab[i][j] + '0'));
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
}

void	trouver_emplact_vide(int *coord, int tab[4][4])
{
	int i;
	int j;

	*coord = 42;
	i = 0;
	j = 0;
	while (j++ < 4)
	{
		while (i++ < 4)
		{
			if (tab[j - 1][i - 1] == 0)
			{
				*coord = j - 1;
				*(coord + 1) = i - 1;
				return ;
			}
		}
	}
}

int		disposition(int tab[4][4], int *consignes)
{
	int coord[2];
	int boite_testee;

	trouver_emplact_vide(&coord[0], tab);
	if (coord[0] == 42)
		return (1);
	boite_testee = 0;
	while (boite_testee++ < 4)
	{
		if (boite_legale(boite_testee, tab, coord, consignes) == 1)
		{
			tab[coord[0]][coord[1]] = boite_testee;
			if (disposition(tab, consignes) == 1)
				return (1);
		}
	}
	return (0);
}

void	maketab(int *consignes)
{
	int tableau[4][4];
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			tableau[i][j] = 0;
			j++;
		}
		i++;
	}
	if (disposition(tableau, consignes))
		print_tab(tableau);
	else
		write(1, "Error\n", 6);
}
