/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaugues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 10:49:05 by psaugues          #+#    #+#             */
/*   Updated: 2022/07/10 14:54:49 by psaugues         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	a;
	int	k;

	i = 0;
	while (i < size)
	{
		k = 0;
		while (k < size)
		{
			a = tab[i];
			if (tab[i] < tab[k])
			{
				tab[i] = tab[k];
				tab[k] = a;
			}
			k++;
		}
	i++;
	}
}
