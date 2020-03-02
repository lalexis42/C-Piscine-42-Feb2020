/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 12:43:20 by rgilles           #+#    #+#             */
/*   Updated: 2020/02/07 12:45:30 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	char *charptr;

	charptr = str;
	while (*charptr != 0)
	{
		if (*charptr < 'a' || *charptr > 'z')
		{
			return (0);
		}
		charptr++;
	}
	return (1);
}
