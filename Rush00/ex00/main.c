/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:35:29 by rgilles           #+#    #+#             */
/*   Updated: 2020/02/08 16:35:34 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str_nb);
void	rush(int x, int y);

int		main(const int argc, const char *argv[])
{
	if (argc == 3)
		rush(ft_atoi(argv[1]), ft_atoi(argv[2]));
	return (0);
}

int		ft_atoi(const char *str_nb)
{
	const char	*charptr;
	int			nombre;
	int			signe;

	nombre = 0;
	signe = 1;
	charptr = str_nb;
	while (*charptr == ' ' || (*charptr >= 9 && *charptr <= 13))
		charptr++;
	if (*charptr == '-')
		signe = -1;
	if (*charptr == '+' || *charptr == '-')
		charptr++;
	while (*charptr >= '0' && *charptr <= '9')
	{
		nombre *= 10;
		nombre = nombre + (int)(*charptr - 48);
		charptr++;
	}
	nombre = nombre * signe;
	return (nombre);
}
