/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaugues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 12:55:12 by psaugues          #+#    #+#             */
/*   Updated: 2022/07/22 13:39:11 by psaugues         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*tab_r;

	tab_r = malloc(sizeof(int) * length);
	i = -1;
	while (++i < length)
		tab_r[i] = (*f)(tab[i]);
	return (tab_r);
}
