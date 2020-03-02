/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 14:21:05 by rgilles           #+#    #+#             */
/*   Updated: 2020/02/09 14:55:55 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		an(char c)
{
	if (c < '0')
		return (0);
	else if (c > '9' && c < 'A')
		return (0);
	else if ((c > 'Z' && c < 'a') || (c > 'z'))
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	char *charptr;

	charptr = str;
	while (*charptr)
	{
		if (charptr == str)
		{
			if (*charptr <= 'z' && *charptr >= 'a')
				*charptr -= 32;
		}
		else if (an(*(charptr - 1)) == 0)
		{
			if (*charptr <= 'z' && *charptr >= 'a')
				*charptr -= 32;
		}
		else if ((*charptr >= 'A') && (*charptr <= 'Z'))
		{
			*charptr += 32;
		}
		charptr++;
	}
	return (str);
}
