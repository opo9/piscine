/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaugues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 13:39:26 by psaugues          #+#    #+#             */
/*   Updated: 2022/07/20 16:04:20 by psaugues         ###   ########lyon.fr   */
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

int	in(char str, char *charset)
{
	int	i;

	i = -1;
	while (charset[++i])
		if (charset[i] == str)
			return (1);
	return (0);
}

char	**create_tab(char *str, char *charset)
{
	int		i;
	int		counter;
	int		str_len;
	int		j;
	char	**tab;

	tab = NULL;
	str_len = ft_strlen(str);
	i = -1;
	counter = 0;
	while (str[++i])
		if (in(str[i], charset) == 1 && in(str[i + 1], charset) == 0)
			counter++;
	tab = malloc(sizeof(char *) * counter + 1);
	i = -1;
	while (++i <= counter)
	{
		tab[i] = malloc(sizeof(char) * str_len + 1);
		j = -1;
		while (++j <= str_len)
			tab[i][j] = '\0';
	}
	return (tab);
}

char	**check(char chr, char *charset, char **tab)
{
	if (in(chr, charset))
		return (tab + 1);
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		k;
	int		count;
	char	**tab;
	int		str_len;

	tab = create_tab(str, charset);
	k = 0;
	count = 0;
	i = -1;
	str_len = ft_strlen(str);
	while (++i <= str_len)
	{
		while (in(str[i], charset) == 1 && in(str[i + 1], charset) == 1)
			i++;
		if (in(str[i], charset) == 1 && in(str[1 + i++], charset) == 0)
		{
			k = 0;
			count++;
		}
		tab[count][k++] = str[i];
	}
	tab[count + 1] = 0;
	return (check(str[0], charset, tab));
}
