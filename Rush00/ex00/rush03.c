/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:36:13 by rgilles           #+#    #+#             */
/*   Updated: 2020/02/08 16:36:32 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int		i1;
	int		i2;

	i1 = 1;
	while (i1 <= y)
	{
		i2 = 1;
		while (i2 <= x)
		{
			if ((i2 == 1 && i1 == 1) || (i2 == 1 && i1 == y))
				ft_putchar('A');
			else if ((i2 == x && i1 == 1) || (i2 == x && i1 == y))
				ft_putchar('C');
			else if ((i2 > 1 && i2 < x) && (i1 == 1 || i1 == y))
				ft_putchar('B');
			else if ((i1 > 1 && i1 < y) && (i2 == 1 || i2 == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
			i2++;
		}
		ft_putchar('\n');
		i1++;
	}
}
