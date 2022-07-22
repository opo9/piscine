/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaugues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 15:47:29 by psaugues          #+#    #+#             */
/*   Updated: 2022/07/21 10:26:56 by psaugues         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	unsigned int	size;
	long int		i;

	i = -1;
	(*range) = NULL;
	if (min >= max)
		return (0);
	size = max - min;
	(*range) = malloc (sizeof(int) * size);
	if ((*range) == 0)
		return (-1);
	while (++i < size)
		(*range)[i] = min + i;
	return (size);
}
