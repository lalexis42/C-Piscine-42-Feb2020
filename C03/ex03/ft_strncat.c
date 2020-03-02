/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 16:34:14 by rgilles           #+#    #+#             */
/*   Updated: 2020/02/10 16:34:17 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*charptrdest;
	char			*charptrsrc;
	unsigned int	i;

	i = 0;
	charptrdest = dest;
	charptrsrc = src;
	while (*charptrdest)
		charptrdest++;
	while (i < nb && *charptrsrc)
	{
		*charptrdest = *charptrsrc;
		charptrsrc++;
		charptrdest++;
		i++;
	}
	*charptrdest = 0;
	return (dest);
}
