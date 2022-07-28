/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaugues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 16:11:45 by psaugues          #+#    #+#             */
/*   Updated: 2022/07/28 18:25:36 by psaugues         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlenn(char *word)
{
	int	size;

	size = 0;
	while (word[size] != '\0')
	{
		size++;
	}
	return (size);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	size_s1;
	int	size_s2;

	size_s1 = ft_strlenn(s1);
	size_s2 = ft_strlenn(s2);
	i = 0;
	while (i <= size_s1 +1 && i <= size_s2 + 1)
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] > s2[i])
				return (1);
			else
				return (-1);
		}
		i++;
	}
	return (0);
}
