/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaugues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 20:04:23 by psaugues          #+#    #+#             */
/*   Updated: 2022/07/07 20:12:58 by psaugues         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char nbu, char nbd, char nbt)
{
	write (1, &nbu, 1);
	write (1, &nbd, 1);
	write (1, &nbt, 1);
	if (nbu != '7' || nbd != '8' || nbt != '9')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	nbu;
	int	nbd;
	int	nbt;

	nbu = '0';
	while (nbu < '8')
	{
		nbd = nbu + 1;
		while (nbd < '9')
		{
			nbt = nbd + 1;
			while (nbt <= '9')
			{
				ft_print(nbu, nbd, nbt);
				nbt++;
			}
		nbd++;
		}
	nbu++;
	}
}
