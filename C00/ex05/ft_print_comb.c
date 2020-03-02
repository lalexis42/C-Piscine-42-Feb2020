/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 12:15:17 by rgilles           #+#    #+#             */
/*   Updated: 2020/02/05 12:15:20 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char c;
	char d;
	char u;

	c = '0' - 1;
	while (c++ < '7')
	{
		d = c;
		while (d++ < '8')
		{
			u = d;
			while (u++ < '9')
			{
				if (!(c == '0' && d == '1' && u == '2'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				ft_putchar(c);
				ft_putchar(d);
				ft_putchar(u);
			}
		}
	}
}
