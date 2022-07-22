/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaugues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 13:29:35 by psaugues          #+#    #+#             */
/*   Updated: 2022/07/19 17:46:44 by psaugues         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putnbr_base(int nb, char *base, char *tab, int k);
void	ft_rev_int_tab(char	*tab, int size);
int		ft_strlen(char *word);

int	index_of(char chr, char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (str[index] == chr)
			return (index);
		index++;
	}
	return (-1);
}

int	conditions(char value_of_str, char *base, int ret)
{
	int	base_len;
	int	chr_index;
	int	check;

	check = 0;
	base_len = ft_strlen(base);
	chr_index = index_of(value_of_str, base);
	if (chr_index < 0)
	{
		check = 1;
		return (ret);
	}
	ret = ret * base_len + chr_index;
	return (ret);
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
			if ((base[k] == base[i] && i != k) || base[i] == ' '
				|| (base[i] > 8 && base[i] < 14))
				return (3);
			k++;
		}
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	ret;
	int	sign;
	int	i;

	sign = 0;
	ret = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] > 8 && str[i] < 14)
		|| str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign += 1;
		i++;
	}
	while (str[i])
	{
		ret = conditions(str[i], base, ret);
		i++;
	}
	if (sign % 2 == 1)
		ret *= -1;
	return (ret);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		number;
	char	*tab;
	int		i;

	i = -1;
	if (is_there_an_error(base_to) || is_there_an_error(base_from))
		return (NULL);
	tab = malloc(sizeof(char) * 34);
	while (++i < 35)
		tab[i] = '\0';
	number = ft_atoi_base(nbr, base_from);
	ft_putnbr_base(number, base_to, tab, -2);
	i = 0;
	while (tab[i])
		i++;
	ft_rev_int_tab(tab, i);
	return (tab);
}
