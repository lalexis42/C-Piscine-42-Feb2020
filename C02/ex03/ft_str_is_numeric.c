/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 11:28:49 by rgilles           #+#    #+#             */
/*   Updated: 2020/02/07 11:29:11 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	char *charptr;

	charptr = str;
	while (*charptr != 0)
	{
		if (*charptr < '0' || *charptr > '9')
		{
			return (0);
		}
		charptr++;
	}
	return (1);
}
