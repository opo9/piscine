/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaugues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:30:49 by psaugues          #+#    #+#             */
/*   Updated: 2022/07/13 12:24:53 by psaugues         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_hexa(int str)
{		
	char	a;

	a = "0123456789abcdef"[str];
	write(1, &a, 1);
}

void	ft_bc(unsigned char str)
{
	unsigned int	strt;
	unsigned int	stru;

	write (1, "\\", 1);
	strt = str / 16;
	ft_print_hexa(strt);
	stru = str % 16;
	ft_print_hexa(stru);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			ft_bc(str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
