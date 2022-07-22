/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaugues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 14:29:04 by psaugues          #+#    #+#             */
/*   Updated: 2022/07/18 18:36:12 by psaugues         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int			*ptr;
	long int	size;
	long int	i;

	i = -1;
	ptr = NULL;
	if (min >= max)
		return (ptr);
	size = max - min;
	ptr = malloc (sizeof(int) * size);
	if (ptr == 0)
		return (NULL);
	while (++i < size)
		ptr[i] = min + i;
	return (ptr);
}
