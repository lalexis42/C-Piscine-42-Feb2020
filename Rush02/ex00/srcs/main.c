/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asimoes <asimoes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 16:54:33 by rgilles           #+#    #+#             */
/*   Updated: 2020/02/23 20:36:52 by frchaban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_tools.h>

char	*is_valid_number(char *str)
{
	char	*start;
	int		is_neg;

	is_neg = 1;
	start = NULL;
	while (*str == ' ' || *str == '\t' || *str == '\n'
			|| *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str++ == '-')
			is_neg *= -1;
	}
	while (*str == '0' && *(str + 1) != '\0')
		str++;
	start = str;
	if (is_neg == -1)
		return (NULL);
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (NULL);
		str++;
	}
	return (start);
}

int		ft_is_good(t_trio *trio)
{
	if (trio->hundred_units == 0 && trio->unit == 0 && trio->dozen == 0)
		return (0);
	return (1);
}

void	convert_to_text(char *number, t_dict *dict)
{
	char	*nb;
	int		i;
	int		size;
	int		f;
	t_trio	*trio;

	i = 0;
	f = 0;
	nb = format_string(number);
	size = ft_strlen(nb) / 3;
	while (i < size)
	{
		if (!(trio = trio_to_struct(nb)))
			return ;
		ft_display_hundred_units(trio->hundred_units, dict, &f);
		ft_display_hundred(trio->hundred, dict, &f);
		ft_display_dozen(trio->dozen, dict, &f);
		ft_display_unit(trio->unit, dict, &f);
		if (i != size - 1 && ft_is_good(trio) == 1)
			ft_display_zero(size - 1 - i, dict);
		free_trio(trio);
		i++;
		nb += 3;
	}
}

int		main_other(char *number, t_dict *dict)
{
	int zero;

	if (number == NULL)
		return (error(ERROR));
	else if (dict == NULL || ft_strlen(number) > ft_dictmaxlen(dict))
		return (error(DICT_ERROR));
	else
	{
		if (*number == '0')
		{
			zero = 0;
			ft_display_unit(number, dict, &zero);
		}
		else
			convert_to_text(number, dict);
		write(1, "\n", 1);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	t_dict	*dict;
	char	*number;

	number = NULL;
	if (argc != 1 && argc != 2 && argc != 3)
		return (error(ERROR));
	if (argc == 3)
		number = is_valid_number(argv[2]);
	else if (argc == 2)
		number = is_valid_number(argv[1]);
	else if (argc == 1)
		number = is_valid_number(ft_file_missing());
	dict = (argc == 3) ? ft_dict_setup(argv[1]) : ft_dict_setup(DICT_REF);
	if (!(main_other(number, dict)))
		return (0);
	ft_free_dict(dict);
	return (0);
}
