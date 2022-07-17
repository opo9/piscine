/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaugues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 08:31:38 by psaugues          #+#    #+#             */
/*   Updated: 2022/07/11 08:57:05 by psaugues         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{	
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] < 'a' || str[i] > 'z'))
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
