/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 11:55:25 by rgilles           #+#    #+#             */
/*   Updated: 2020/02/07 12:03:54 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	char *charptr;

	charptr = str;
	while (*charptr != 0)
	{
		if (*charptr < 'A')
		{
			return (0);
		}
		if ((*charptr > 'Z' && *charptr < 'a') || (*charptr > 'z'))
		{
			return (0);
		}
		charptr++;
	}
	return (1);
}
