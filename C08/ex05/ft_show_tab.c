/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 18:11:15 by rgilles           #+#    #+#             */
/*   Updated: 2020/02/19 18:11:28 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	char *charptr;

	charptr = str;
	while (*charptr != 0)
	{
		write(1, charptr, 1);
		charptr++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int nbr_unsigned;

	if (nb < 0)
	{
		nbr_unsigned = (unsigned int)(-1 * nb);
		ft_putchar('-');
	}
	else
		nbr_unsigned = (unsigned int)nb;
	if (nbr_unsigned >= 10)
	{
		ft_putnbr(nbr_unsigned / 10);
		ft_putnbr(nbr_unsigned % 10);
	}
	else
		ft_putchar(nbr_unsigned + '0');
}

void	ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		i++;
	}
}
