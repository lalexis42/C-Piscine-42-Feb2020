/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 15:55:46 by rgilles           #+#    #+#             */
/*   Updated: 2020/02/10 15:55:52 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	char				*charptr;
	unsigned int		iterator;

	charptr = str;
	iterator = 0;
	while (*charptr != 0)
	{
		iterator++;
		charptr++;
	}
	return (iterator);
}

unsigned int	ft_strlcat(char *dst, char *src, unsigned int siz)
{
	char			*d;
	char			*s;
	unsigned int	n;
	unsigned int	dlen;

	d = dst;
	s = src;
	n = siz;
	while (n-- != 0 && *d != '\0')
		d++;
	dlen = d - dst;
	n = siz - dlen;
	if (n == 0)
		return (dlen + ft_strlen(s));
	while (*s)
	{
		if (n != 1)
		{
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
	return (dlen + (s - src));
}
