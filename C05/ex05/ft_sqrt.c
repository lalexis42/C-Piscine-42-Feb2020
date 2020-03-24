/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgilles <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 21:08:33 by rgilles           #+#    #+#             */
/*   Updated: 2020/02/12 21:08:35 by rgilles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	You can do otherwise but I'm just very proud of my recursive integer 
**	implementation of the Babylonian square root detection algorithm. I'm
**	the only one in the whole piscine to have dealt with it this way.
**  You can implement it iteratively, with the same level of theoretical complexity
**  (but with faster execution in practice), but the point of C05 was to practice
**  recursion soooo...
*/

int	calculate(int nb, long double approx, long double prev_approx)
{
	if (approx * approx <= 2147483647 && (int)approx * (int)approx == nb)
		return ((int)approx);
	if ((int)approx == (int)prev_approx)
		return (0);
	else
		return (calculate(nb, (approx + nb / approx) / 2, approx));
}

int	ft_sqrt(int nb)
{
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	return (calculate(nb, 50, 0));
}
