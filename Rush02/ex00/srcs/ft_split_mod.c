/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimoes <asimoes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 08:21:32 by frchaban          #+#    #+#             */
/*   Updated: 2020/02/23 19:44:47 by frchaban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_tools.h>

char	**ft_split_mod(char *str, char *charset)
{
	char	**split;
	int		i;
	int		compteur;
	int		size;

	compteur = 0;
	i = 0;
	if (!(split = malloc(sizeof(*split) * (ft_strlen(str) + 1))))
		return (0);
	while (i < ft_strlen(str))
	{
		if (ft_is_charset(str, i, charset) == 1)
		{
			size = ft_wrdlen(str, i, charset);
			split[compteur] = ft_strdup(str, i, size);
			i = i + size;
			compteur = compteur + 1;
			charset = "";
		}
		i++;
	}
	split[compteur] = 0;
	return (split);
}
