/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <rgilles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 14:49:00 by rgilles           #+#    #+#             */
/*   Updated: 2020/02/24 14:49:03 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>

void	process_file(t_gridinfo mygrid, char *filename)
{
	char	*charptr;

	if (!(mygrid.map = check_map(get_lines_from_grid(filename), mygrid.height)))
	{
		error("map error\n");
		return ;
	}
	charptr = mygrid.map[0];
	while (*charptr)
		charptr++;
	mygrid.sqrchr = *(charptr - 1);
	mygrid.empty = *(charptr - 3);
	do_square(mygrid);
}

void	calculate_dims(int file, char *filename)
{
	t_gridinfo	mygrid;
	char		c;
	char		temp;
	char		prev_c;

	c = 0;
	prev_c = 0;
	while (c != '\n' && read(file, &c, 1))
		;
	mygrid.width = 0;
	mygrid.height = 1;
	while (read(file, &c, 1))
	{
		if (mygrid.height == 1 && c != '\n')
			mygrid.width++;
		if (c == '\n')
			mygrid.height++;
		prev_c = temp;
		temp = c;
	}
	close(file);
	(c == '\n' && prev_c != '\n' && prev_c != '\0') ?
	process_file(mygrid, filename)
	: error("map error\n");
}

void	parse_file(char *filename)
{
	int			file;

	if ((file = open(filename, O_RDONLY)) < 0)
		error("map error\n");
	else
		calculate_dims(file, filename);
}

int		main(int ac, char **av)
{
	int i;

	i = 1;
	if (ac == 1)
		parse_file(ft_file_missing());
	while (i < ac)
	{
		parse_file(av[i]);
		if (i < ac - 1)
			ft_putchar('\n');
		i++;
	}
	return (0);
}
