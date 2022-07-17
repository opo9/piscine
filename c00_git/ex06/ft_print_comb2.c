/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaugues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 12:55:28 by psaugues          #+#    #+#             */
/*   Updated: 2022/07/07 17:15:51 by psaugues         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_affiche(int a, int b)
{
	int	tens_a;
	int	tens_b;
	int	unit_a;
	int	unit_b;

	tens_a = a / 10 + 48;
	tens_b = b / 10 + 48;
	unit_a = a % 10 + 48;
	unit_b = b % 10 + 48;
	write(1, &tens_a, 1);
	write(1, &unit_a, 1);
	write(1, " ", 1);
	write(1, &tens_b, 1);
	write(1, &unit_b, 1);
	if (a != 98 || b != 99)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_affiche(a, b);
			b++;
		}
		a++;
	}
}
