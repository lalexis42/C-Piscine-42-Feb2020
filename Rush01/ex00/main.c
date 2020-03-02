/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 09:57:51 by rgilles           #+#    #+#             */
/*   Updated: 2020/02/15 09:57:53 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	maketab(int *consignes);

void	set_consignes(char *argument, int *consignes, int *j)
{
	while (*argument && *j < 16)
	{
		if ((*argument >= '1' && *argument <= '4')
		&& (*(argument + 1) == ' ' || *(argument + 1) == 0))
		{
			consignes[*j] = ((int)(*argument - '0'));
			*j = *j + 1;
			argument++;
		}
		if (*argument == ' ')
		{
			argument++;
		}
		else if (*argument != 0)
		{
			return ;
		}
	}
}

int		main(int argc, char **argv)
{
	int consignes[16];
	int j;

	j = 0;
	if (argc == 2)
	{
		set_consignes(argv[1], &consignes[0], &j);
		(j == 16) ? maketab(consignes) : write(1, "Error\n", 6);
	}
	else
	{
		write(1, "Error\n", 6);
	}
	return (0);
}
