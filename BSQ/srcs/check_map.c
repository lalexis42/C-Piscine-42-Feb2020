/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 16:11:19 by rgilles           #+#    #+#             */
/*   Updated: 2020/02/24 16:11:21 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>

int		check_first_2_lines(char **map)
{
	char	*charptr;
	int		i;

	charptr = map[0];
	while (*charptr != 0)
		charptr++;
	if (ft_strlen(map[0]) > 3 && *(charptr - 1) >= ' ' && *(charptr - 2) >= ' '
		&& *(charptr - 3) >= ' ' && *(charptr - 1) != *(charptr - 2)
		&& *(charptr - 1) != *(charptr - 3) && *(charptr - 2) != *(charptr - 3))
	{
		i = 0;
		while (i < ((charptr - 3) - map[0]))
		{
			if (map[0][i] < '0' || map[0][i] > '9')
				return (0);
			i++;
		}
		if (!map[1] || (map[1][0] != *(charptr - 2)
			&& map[1][0] != *(charptr - 3)))
			return (0);
		return (1);
	}
	else
		return (0);
}

int		check_nb_lines(char **map, int height)
{
	char	*nblines;
	int		nblinesint;
	int		i;

	nblines = malloc(ft_strlen(map[0]) - 3);
	i = 0;
	while (i < ft_strlen(map[0]) - 3)
	{
		nblines[i] = map[0][i];
		i++;
	}
	nblines[i] = 0;
	nblinesint = ft_atoi(nblines);
	free(nblines);
	if (nblinesint == height - 1)
		return (1);
	return (0);
}

int		check_line_length_consistency(char **map)
{
	int ref_len;
	int i;

	ref_len = ft_strlen(map[1]);
	i = 2;
	while (map[i])
	{
		if (ft_strlen(map[i++]) != ref_len)
			return (0);
	}
	if (map[i - 1][ref_len] != 0)
		return (0);
	return (1);
}

int		check_charset_consistency(char **map)
{
	char	*charptr;
	int		j;
	int		i;
	char	empty;
	char	obstacle;

	charptr = map[0];
	while (*charptr != 0)
		charptr++;
	empty = *(charptr - 3);
	obstacle = *(charptr - 2);
	i = 1;
	while (map[i])
	{
		j = 0;
		while (map[i][j] != 0)
		{
			if (map[i][j] != empty && map[i][j] != obstacle)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

char	**check_map(char **map, int height)
{
	if (!(check_first_2_lines(map)))
		return (NULL);
	if (!(check_nb_lines(map, height)))
		return (NULL);
	if (!(check_line_length_consistency(map)))
		return (NULL);
	if (!(check_charset_consistency(map)))
		return (NULL);
	return (map);
}
