/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 12:56:44 by rgilles           #+#    #+#             */
/*   Updated: 2020/02/17 12:56:46 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if ((*range = malloc(sizeof(int) * (max - min))) == NULL)
		return (-1);
	while (min < max)
	{
		*(*range + i) = min;
		min++;
		i++;
	}
	return (i);
}
