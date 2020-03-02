/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 14:13:10 by rgilles           #+#    #+#             */
/*   Updated: 2020/02/06 14:14:39 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int temp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (*(tab + j) < *(tab + i))
			{
				temp = *(tab + i);
				*(tab + i) = *(tab + j);
				*(tab + j) = temp;
			}
			j++;
		}
		i++;
	}
}
