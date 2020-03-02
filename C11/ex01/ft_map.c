/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 10:31:48 by rgilles           #+#    #+#             */
/*   Updated: 2020/02/21 10:31:50 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *responsetab;

	if (!(responsetab = malloc(sizeof(int) * length)))
		return (0);
	i = 0;
	while (i < length)
	{
		responsetab[i] = f(tab[i]);
		i++;
	}
	return (responsetab);
}
