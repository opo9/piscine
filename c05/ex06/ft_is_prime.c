/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaugues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:55:07 by psaugues          #+#    #+#             */
/*   Updated: 2022/07/15 13:29:10 by psaugues         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	mid;
	int	high;
	int	low;

	low = 0;
	high = nb;
	if (high > 46341)
		high = 46341;
	if (nb == 1)
		return (1);
	while (high - low > 1)
	{
		mid = (high + low) / 2;
		if (mid * mid > nb)
			high = mid;
		else if (mid * mid < nb)
			low = mid;
		else
			return (1);
	}
	return (high);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	square_up;

	i = 2;
	if (nb == 0 || nb == 1)
		return (0);
	if (ft_sqrt(nb) == 1)
		return (0);
	square_up = ft_sqrt(nb);
	while (square_up > i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
