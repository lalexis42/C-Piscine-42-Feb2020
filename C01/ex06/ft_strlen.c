/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 10:51:02 by rgilles           #+#    #+#             */
/*   Updated: 2020/02/06 10:51:05 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
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
