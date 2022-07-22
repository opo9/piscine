/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaugues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 13:34:59 by psaugues          #+#    #+#             */
/*   Updated: 2022/07/19 17:35:36 by psaugues         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *word);
int	is_there_an_error(char *base);

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

void	ft_rev_int_tab(char	*tab, int size)
{
	int	i;
	int	a;

	i = 0;
	while (i < size / 2)
	{
		a = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = a;
		i++;
	}
}

void	add(int nbr_to_print, char *base, int k, char *tab)
{
	char	test;

	if (nbr_to_print != '-')
	{
		test = base[nbr_to_print];
		tab[k] = test;
	}
	else
	{
		tab[k] = '-';
	}
}

void	ft_putnbr_inside(long long int nb, char *base, char *tab, int k)
{
	int	base_len;

	k++;
	base_len = ft_strlen(base);
	if (nb >= 0 && nb < base_len)
		add(nb, base, k, tab);
	else if (nb < 0)
	{
		add('-', base, k, tab);
		ft_putnbr_inside(nb * -1, base, tab, k);
	}
	else if (nb < base_len * base_len)
	{
		ft_putnbr_inside(nb / base_len, base, tab, k + 1);
		ft_putnbr_inside(nb % base_len, base, tab, k);
	}
	else
	{
		ft_putnbr_inside(nb / base_len, base, tab, k);
		ft_putnbr_inside(nb % base_len, base, tab, k);
	}
}

void	ft_putnbr_base(int nb, char *base, char *tab, int k)
{
	long long int	cp_nb;

	cp_nb = nb;
	ft_putnbr_inside(cp_nb, base, tab, k);
}
