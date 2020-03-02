/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_headers.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 15:19:39 by rgilles           #+#    #+#             */
/*   Updated: 2020/02/21 15:19:42 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_HEADERS_H
# define MY_HEADERS_H

# include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
int		addition(int a, int b);
int		substraction(int a, int b);
int		multiplication(int a, int b);
int		division(int a, int b);
int		modulo(int a, int b);

#endif
