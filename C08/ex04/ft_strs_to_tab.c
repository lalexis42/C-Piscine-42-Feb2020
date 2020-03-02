/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 11:40:59 by rgilles           #+#    #+#             */
/*   Updated: 2020/02/19 11:41:01 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					ft_strlen(char *str)
{
	char	*charptr;
	int		iterator;

	charptr = str;
	iterator = 0;
	while (*charptr != 0)
	{
		iterator++;
		charptr++;
	}
	return (iterator);
}

char				*ft_strdup(char *src)
{
	char	*dupli;
	int		i;

	i = 0;
	if (!(dupli = malloc(ft_strlen(src) + 1)))
		return (dupli);
	while (src[i])
	{
		dupli[i] = src[i];
		i++;
	}
	dupli[i] = 0;
	return (dupli);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*mystrings;
	int			i;

	if (!(mystrings = malloc(sizeof(struct s_stock_str) * (ac + 2))))
		return (0);
	i = 0;
	while (i < ac)
	{
		mystrings[i].size = ft_strlen(av[i]);
		mystrings[i].str = av[i];
		mystrings[i].copy = ft_strdup(av[i]);
		i++;
	}
	mystrings[i].str = NULL;
	return (mystrings);
}
