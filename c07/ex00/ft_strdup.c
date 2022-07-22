/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaugues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:49:28 by psaugues          #+#    #+#             */
/*   Updated: 2022/07/18 14:22:19 by psaugues         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char	*ft_strdup(char *src)
{
	int		i;
	int		size;
	char	*copy;

	i = -1;
	size = ft_strlen(src);
	copy = malloc (sizeof(char) * (size + 1));
	if (copy == NULL)
		return (NULL);
	while (src[++i])
		copy[i] = src[i];
	copy[i] = '\0';
	return (copy);
}
