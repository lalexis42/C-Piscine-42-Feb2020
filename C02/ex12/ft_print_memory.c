/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 22:05:32 by rgilles           #+#    #+#             */
/*   Updated: 2020/02/09 22:05:36 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_hexa(char c)
{
	int		negative_char;
	char	hex_n1;
	char	hex_n2;

	if (c < 0)
	{
		negative_char = (-128 - (c)) * -1 + 128;
		hex_n1 = negative_char / 16;
		hex_n2 = negative_char % 16;
	}
	else
	{
		hex_n1 = c / 16;
		hex_n2 = c % 16;
	}
	if (hex_n1 < 10)
		ft_putchar(hex_n1 + '0');
	else
		ft_putchar(hex_n1 + 87);
	if (hex_n2 < 10)
		ft_putchar(hex_n2 + '0');
	else
		ft_putchar(hex_n2 + 87);
}

void	ft_putaddr(void *addr)
{
	char	addr_c[15];
	long	addr_l;
	int		i;

	addr_l = (long)addr;
	i = 0;
	while (addr_l > 0)
	{
		addr_c[i] = addr_l % 16;
		if (addr_c[i] < 10)
			addr_c[i] += '0';
		else
			addr_c[i] += 87;
		addr_l = addr_l / 16;
		i++;
	}
	while (i < 15)
	{
		addr_c[i] = '0';
		i++;
	}
	while (--i >= 0)
		ft_putchar(addr_c[i]);
}

void	ft_print_line(void *addr, int size)
{
	int		i;
	int		sp_to_print;
	char	*addr_c;

	addr_c = (char *)addr;
	i = 0;
	while (i < size)
	{
		ft_print_hexa(addr_c[i++]);
		if (i % 2 == 0)
			ft_putchar(' ');
	}
	sp_to_print = ((16 - size) * 2) + (19 - size) / 2;
	while (--sp_to_print > 0)
		ft_putchar(' ');
	i = -1;
	while (++i < size)
	{
		if (addr_c[i] >= 32 && addr_c[i] <= 126)
			ft_putchar(addr_c[i]);
		else
			ft_putchar('.');
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	char_to_print;
	unsigned int	offset;

	offset = 0;
	while (size > 0)
	{
		if (size >= 16)
		{
			char_to_print = 16;
			size -= 16;
		}
		else
		{
			char_to_print = size;
			size = 0;
		}
		ft_putaddr(addr + offset);
		ft_putchar(':');
		ft_putchar(' ');
		ft_print_line(addr + offset, char_to_print);
		ft_putchar('\n');
		offset += 16;
	}
	return (addr);
}
