/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 16:04:32 by rgilles           #+#    #+#             */
/*   Updated: 2020/02/06 16:05:00 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int iterator;

	iterator = 0;
	while (*(src + iterator) != 0)
	{
		*(dest + iterator) = *(src + iterator);
		iterator++;
	}
	*(dest + iterator) = 0;
	return (dest);
}
