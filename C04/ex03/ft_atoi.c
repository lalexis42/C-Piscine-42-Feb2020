/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 12:39:53 by rgilles           #+#    #+#             */
/*   Updated: 2020/02/11 12:40:22 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int		nombre;
	int		signe;
	char	*charptr;

	nombre = 0;
	signe = 1;
	charptr = str;
	while (*charptr == ' ' || (*charptr >= 9 && *charptr <= 13))
		charptr++;
	while (*charptr == '-' || *charptr == '+')
	{
		if (*charptr == '-')
			signe *= -1;
		charptr++;
	}
	while (*charptr >= '0' && *charptr <= '9')
	{
		nombre *= 10;
		nombre += (int)(*charptr - '0');
		charptr++;
	}
	return (nombre * signe);
}
