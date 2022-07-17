/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaugues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:37:29 by psaugues          #+#    #+#             */
/*   Updated: 2022/07/15 13:28:56 by psaugues         ###   ########lyon.fr   */
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
			return (mid);
	}
	return (0);
}
