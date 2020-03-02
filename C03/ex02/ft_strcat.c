/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 15:55:46 by rgilles           #+#    #+#             */
/*   Updated: 2020/02/10 15:55:52 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char *charptr;
	char *charptrsrc;

	charptr = dest;
	charptrsrc = src;
	while (*charptr)
		charptr++;
	while (*charptrsrc)
	{
		*charptr = *charptrsrc;
		charptrsrc++;
		charptr++;
	}
	*charptr = 0;
	return (dest);
}
