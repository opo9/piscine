/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaugues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 17:26:55 by psaugues          #+#    #+#             */
/*   Updated: 2022/07/06 20:01:34 by psaugues         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int chiffre)
{
	if (chiffre >= 0)
	{
		write(1, "P", 1);
	}
	else
		write(1, "N", 1);
}