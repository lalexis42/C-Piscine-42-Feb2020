/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 18:09:41 by rgilles           #+#    #+#             */
/*   Updated: 2020/02/10 18:09:44 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	if (*to_find == 0)
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (str + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}
