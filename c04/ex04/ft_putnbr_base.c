/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaugues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 12:41:26 by psaugues          #+#    #+#             */
/*   Updated: 2022/07/13 19:23:56 by psaugues         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *word)
{
	int	size;

	size = 0;
	while (word[size] != '\0')
	{
		size++;
	}
	return (size);
}

void	print(int nbr_to_print, char *base)
{
	char	test;

	test = base[nbr_to_print];
	write(1, &test, 1);
}

int	is_there_an_error(char *base)
{
	int	i;
	int	k;
	int	base_len;

	i = 0;
	base_len = ft_strlen(base);
	if (base_len == 0 || base_len == 1)
		return (1);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (2);
		k = 0;
		while (base[k])
		{
			if (base[k] == base[i] && i != k)
				return (3);
			k++;
		}	
		i++;
	}
	return (0);
}

void	ft_putnbr_inside(long long int nb, char *base)
{
	int	base_len;

	if (is_there_an_error(base) != 0)
		return ;
	base_len = ft_strlen(base);
	if (nb >= 0 && nb < base_len)
		print(nb, base);
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr_inside(nb * -1, base);
	}
	else
	{
		ft_putnbr_inside(nb / base_len, base);
		ft_putnbr_inside(nb % base_len, base);
	}
}

void	ft_putnbr_base(int nb, char *base)
{	
	long long int	cp_nb;

	cp_nb = nb;
	ft_putnbr_inside(cp_nb, base);
}
