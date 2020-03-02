/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 12:03:48 by rgilles           #+#    #+#             */
/*   Updated: 2020/02/21 12:03:52 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char *tab[], int (*cmp)(char *, char *))
{
	int		is_sorted;
	int		j;
	char	*temp;

	is_sorted = 0;
	while (!is_sorted)
	{
		j = 0;
		is_sorted = 1;
		while (tab[++j])
			if (cmp(tab[j - 1], tab[j]) > 0)
			{
				temp = tab[j - 1];
				tab[j - 1] = tab[j];
				tab[j] = temp;
				is_sorted = 0;
			}
	}
}
