/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 11:26:21 by rgilles           #+#    #+#             */
/*   Updated: 2020/02/06 11:26:25 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int iterator;
	int swap;

	iterator = 0;
	while (iterator < size)
	{
		swap = tab[iterator];
		tab[iterator] = tab[size - 1];
		tab[size - 1] = swap;
		iterator++;
		size--;
	}
}
