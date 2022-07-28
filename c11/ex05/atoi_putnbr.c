/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_putnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaugues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 09:44:57 by psaugues          #+#    #+#             */
/*   Updated: 2022/07/27 09:54:02 by psaugues         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

int	ft_atoi(char *str)
{
	int	ret;
	int	a;
	int	i;

	a = 0;
	ret = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] > 8 && str[i] < 14))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			a += 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		ret = conditions(str, a, i, ret);
		i++;
	}
	return (ret);
}

void	ft_char(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_char('-');
		ft_char('2');
		nb = 147483648;
	}
	if (nb >= 0 && nb < 10)
		write(1, &nb + 48, 1);
	else if (nb < 0)
	{
		ft_char('-');
		ft_putnbr(nb * -1);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
