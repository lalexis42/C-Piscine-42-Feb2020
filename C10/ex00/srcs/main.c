/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 21:17:11 by rgilles           #+#    #+#             */
/*   Updated: 2020/02/20 21:17:13 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void display(char *filepath)
{
	int		fd;
	char	currentchar;

	fd = open(filepath, O_RDONLY);
	if (fd < 0)
	{
		write(2, "Cannot read file.\n", 18);
		return ;
	}
	while(read(fd, &currentchar, 1))
		write(1, &currentchar, 1);
	close(fd);
}

int main(int argc, char **argv)
{
	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc == 2)
	{
		display(argv[1]);
	}
	else
		write(2, "Too many arguments.\n", 20);
	return(0);
}
