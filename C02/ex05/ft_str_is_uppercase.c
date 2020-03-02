/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 12:46:54 by rgilles           #+#    #+#             */
/*   Updated: 2020/02/07 12:54:18 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	char *charptr;

	charptr = str;
	while (*charptr != 0)
	{
		if (*charptr < 'A' || *charptr > 'Z')
		{
			return (0);
		}
		charptr++;
	}
	return (1);
}
