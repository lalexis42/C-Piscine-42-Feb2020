/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 18:32:25 by rgilles           #+#    #+#             */
/*   Updated: 2020/02/09 18:32:31 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char s)
{
	write(1, &s, 1);
}

void	hex(char c)
{
	char	hex1;
	char	hex2;
	int		neg_char;

	ft_putchar('\\');
	if (c < 0)
	{
		neg_char = (-128 - (c)) * -1 + 128;
		hex1 = neg_char / 16;
		hex2 = neg_char % 16;
	}
	else
	{
		hex1 = c / 16;
		hex2 = c % 16;
	}
	if (hex1 < 10)
		ft_putchar(hex1 + '0');
	else
		ft_putchar(hex1 + 87);
	if (hex2 < 10)
		ft_putchar(hex2 + '0');
	else
		ft_putchar(hex2 + 87);
}

void	ft_putstr_non_printable(char *str)
{
	char *charptr;

	charptr = str;
	while (*charptr != 0)
	{
		if (*charptr <= 31 || *charptr == 127)
			hex(*charptr);
		else
			write(1, charptr, 1);
		charptr++;
	}
}
