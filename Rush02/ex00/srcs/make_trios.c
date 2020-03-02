/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_trios.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimoes <asimoes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 11:51:13 by gdupont           #+#    #+#             */
/*   Updated: 2020/02/23 19:14:37 by frchaban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_tools.h>

char	*ft_strndup_buff(char *s1, int n, int buffer_extension)
{
	int		i;
	char	*dest;

	i = 0;
	dest = malloc(sizeof(*dest) * (n + 1 + buffer_extension));
	if (dest == NULL)
		return (0);
	while (i < n)
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strcat(char *dest, char *src)
{
	int j;
	int i;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*format_string(char *str)
{
	int		zeroes_to_add;
	char	*formatted_string;
	int		i;

	i = 0;
	zeroes_to_add = (3 - ft_strlen(str) % 3) % 3;
	formatted_string = NULL;
	if (!(formatted_string = malloc(ft_strlen(str) + 1 + zeroes_to_add)))
		return (NULL);
	while (zeroes_to_add--)
		formatted_string[i++] = '0';
	formatted_string[i] = '\0';
	return (ft_strcat(formatted_string, str));
}

t_trio	*trio_to_struct(char *str)
{
	t_trio *result;

	if (!(result = malloc(sizeof(t_trio))))
		return (NULL);
	result->hundred = NULL;
	result->hundred_units = NULL;
	result->dozen = NULL;
	result->unit = NULL;
	if (str[0] >= '1')
	{
		result->hundred_units = ft_strndup_buff(&str[0], 1, 0);
		result->hundred = ft_strndup_buff("100", 3, 0);
	}
	if (str[1] >= '2')
		result->dozen = ft_strcat(ft_strndup_buff(&str[1], 1, 1),
						ft_strndup_buff("0", 1, 0));
	if (str[1] == '1')
		result->unit = ft_strcat(ft_strndup_buff("1", 1, 1),
								ft_strndup_buff(&str[2], 1, 0));
	else if (str[2] != '0')
		result->unit = ft_strndup_buff(&str[2], 1, 0);
	return (result);
}

void	free_trio(t_trio *trio)
{
	if (trio->hundred != NULL)
		free(trio->hundred);
	if (trio->hundred_units != NULL)
		free(trio->hundred_units);
	if (trio->dozen != NULL)
		free(trio->dozen);
	if (trio->unit != NULL)
		free(trio->unit);
	if (trio != NULL)
		free(trio);
}
