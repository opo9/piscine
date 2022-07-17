/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaugues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 18:32:56 by psaugues          #+#    #+#             */
/*   Updated: 2022/07/13 09:22:48 by psaugues         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	k;
	int	check;
	int	len_tofind;

	len_tofind = ft_strlen(to_find);
	i = 0;
	check = 0;
	while (str[i] && to_find[k])
	{
		k = 0;
		while (str[i + k] == to_find[k] && str[i] && to_find[k])
		{
			k++;
			check++;
			if (check == len_tofind)
				return (&str[i]);
		}
		check = 0;
		i++;
	}
	if (len_tofind == 0)
		return (str);
	return (0);
}
