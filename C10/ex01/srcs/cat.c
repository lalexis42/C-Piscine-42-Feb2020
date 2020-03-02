/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 22:04:43 by rgilles           #+#    #+#             */
/*   Updated: 2020/02/20 22:04:45 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cat_header.h>

void	ft_put_err(char *str)
{
	char *charptr;

	charptr = str;
	while (*charptr)
	{
		write(2, charptr++, 1);
	}
}

void	ft_print_stdin(void)
{
	char buf;

	while(read(STDIN_FILENO, &buf, 1))
		write(1, &buf, 1);
}

void	inval_param(char *arg)
{
	ft_put_err("ft_cat: ");
	ft_put_err(arg);
	ft_put_err(": No such file or directory\n");
}

int main(int argc, char **argv)
{
	int		fd;
	int		i;
	char	buf;

	i = 1;
	if (argc == 1)
		ft_print_stdin();
	else
		while (i < argc)
		{
			if((fd = open(argv[i], O_RDONLY)) < 0)
				inval_param(argv[i]);
			else
			{
				while(read(fd, &buf, 1))
					write(1, &buf, 1);
			}
			i++;
			close(fd);
		}
	return (0);
}