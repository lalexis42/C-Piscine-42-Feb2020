/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 14:05:27 by rgilles           #+#    #+#             */
/*   Updated: 2020/02/07 14:15:31 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char *charptr;

	charptr = str;
	while (*charptr != 0)
	{
		if (*charptr >= 'a' && *charptr <= 'z')
		{
			*charptr -= 32;
		}
		charptr++;
	}
	return (str);
}
