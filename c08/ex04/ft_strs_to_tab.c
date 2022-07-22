/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaugues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 11:00:43 by psaugues          #+#    #+#             */
/*   Updated: 2022/07/21 13:39:17 by psaugues         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

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

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*t;

	t = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!(t))
		return (NULL);
	i = 0;
	while (i < ac)
	{
		t[i].size = ft_strlen(av[i]);
		t[i].copy = malloc(sizeof(char) * (t[i].size + 1));
		t[i].copy = ft_strcpy(t[i].copy, av[i]);
		t[i].str = malloc(sizeof(char) * (t[i].size + 1));
		t[i].str = ft_strcpy(t[i].str, av[i]);
		i++;
	}
	t[i].str = 0;
	return (t);
}
