/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 14:58:31 by rgilles           #+#    #+#             */
/*   Updated: 2020/02/21 14:58:33 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <my_headers.h>

void	make_operation(int a, int b, int (*operation)(int, int))
{
	ft_putnbr(operation(a, b));
	ft_putchar('\n');
}

void	do_op(char **argv)
{
	if (*argv[2] == '+')
		make_operation(ft_atoi(argv[1]), ft_atoi(argv[3]), addition);
	else if (*argv[2] == '-')
		make_operation(ft_atoi(argv[1]), ft_atoi(argv[3]), substraction);
	else if (*argv[2] == '*')
		make_operation(ft_atoi(argv[1]), ft_atoi(argv[3]), multiplication);
	else if (*argv[2] == '/')
	{
		if (ft_atoi(argv[3]) == 0)
		{
			ft_putstr("Stop : division by zero\n");
			return ;
		}
		make_operation(ft_atoi(argv[1]), ft_atoi(argv[3]), division);
	}
	else if (*argv[2] == '%')
	{
		if (ft_atoi(argv[3]) == 0)
		{
			ft_putstr("Stop : modulo by zero\n");
			return ;
		}
		make_operation(ft_atoi(argv[1]), ft_atoi(argv[3]), modulo);
	}
}

int		main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	else if (ft_strlen(argv[2]) == 1 && (*argv[2] == '+' || *argv[2] == '-'
		|| *argv[2] == '*' || *argv[2] == '/' || *argv[2] == '%'))
	{
		do_op(argv);
	}
	else
		ft_putstr("0\n");
	return (0);
}
