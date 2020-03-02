/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   boite_legale.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 16:45:19 by rgilles           #+#    #+#             */
/*   Updated: 2020/02/16 16:45:22 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_line_legal(int ligne, int *consigne, int tab[4][4])
{
	int i;
	int boites_en_vue;

	boites_en_vue = 1;
	i = 0;
	while (i < 4)
	{
		if (tab[ligne][i] > tab[ligne][0])
			boites_en_vue++;
		i++;
	}
	if (boites_en_vue != *consigne)
		return (0);
	boites_en_vue = 1;
	i = 0;
	while (i < 4)
	{
		if (tab[ligne][i] > tab[ligne][3])
			boites_en_vue++;
		i++;
	}
	if (boites_en_vue != *(consigne + 4))
		return (0);
	return (1);
}

int	is_col_legal(int col, int *consigne, int tab[4][4])
{
	int i;
	int boites_en_vue;

	boites_en_vue = 1;
	i = 0;
	while (i < 4)
	{
		if (tab[i][col] > tab[0][col])
			boites_en_vue++;
		i++;
	}
	if (boites_en_vue != *consigne)
		return (0);
	boites_en_vue = 1;
	i = 0;
	while (i < 4)
	{
		if (tab[i][col] > tab[3][col])
			boites_en_vue++;
		i++;
	}
	if (boites_en_vue != *(consigne + 4))
		return (0);
	return (1);
}

int	boite_legale(int box, int tab[4][4], int coord[2], int *consignes)
{
	int i;

	i = 0;
	while (i++ < coord[0])
	{
		if (tab[i - 1][coord[1]] == box)
			return (0);
	}
	i = 0;
	while (i++ < coord[1])
	{
		if (tab[coord[0]][i - 1] == box)
			return (0);
	}
	if (coord[0] == 3)
	{
		if (!(is_line_legal(coord[0], &consignes[8 + coord[0]], tab)))
			return (0);
	}
	if (coord[1] == 3)
	{
		if (!(is_col_legal(coord[1], &consignes[coord[1]], tab)))
			return (0);
	}
	return (1);
}
