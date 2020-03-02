/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 17:08:57 by rgilles           #+#    #+#             */
/*   Updated: 2020/02/12 17:08:59 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int facto;

	facto = 1;
	if (nb < 0)
		return (0);
	while (nb)
	{
		facto *= nb;
		nb--;
	}
	return (facto);
}
