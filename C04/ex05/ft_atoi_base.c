/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 13:19:27 by rgilles           #+#    #+#             */
/*   Updated: 2020/02/12 13:19:59 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_error_in_base(char *base)
{
	char	*checkbase;
	int		i_check;

	checkbase = base;
	if (*base == 0 || *(base + 1) == 0)
		return (0);
	while (*checkbase)
	{
		if (*checkbase == '+' || *checkbase == '-'
			|| *checkbase == ' ' || *checkbase <= 31)
			return (0);
		i_check = 1;
		while (*(checkbase + i_check))
		{
			if (*(checkbase + i_check) == *checkbase)
				return (0);
			i_check++;
		}
		checkbase++;
	}
	return (1);
}

int		ft_strlen(char *str)
{
	char	*charptr;
	int		iterator;

	charptr = str;
	iterator = 0;
	while (*charptr != 0)
	{
		iterator++;
		charptr++;
	}
	return (iterator);
}

char	*is_in_base(char *base, char *to_find)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (*to_find == base[i])
			return (base + i);
		i++;
	}
	return (0);
}

int		ft_atoi_base(char *str, char *base)
{
	unsigned int	nombre;
	int				signe;
	char			*charptr;

	nombre = 0;
	signe = 1;
	if (check_error_in_base(base))
	{
		charptr = str;
		while (*charptr == ' ' || (*charptr >= 9 && *charptr <= 13))
			charptr++;
		while (*charptr == '-' || *charptr == '+')
		{
			if (*charptr == '-')
				signe *= -1;
			charptr++;
		}
		while (is_in_base(base, charptr))
		{
			nombre *= ft_strlen(base);
			nombre += (unsigned int)(is_in_base(base, charptr) - base);
			charptr++;
		}
	}
	return (int)(nombre * signe);
}
