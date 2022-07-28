/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaugues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 13:39:26 by psaugues          #+#    #+#             */
/*   Updated: 2022/07/28 15:43:04 by psaugues         ###   ########lyon.fr   */
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
	char	**tab;
	int		prev_in;

	tab = NULL;
	str_len = ft_strlen(str);
	counter = 0;
	i = -1;
	prev_in = 1;
	while (str[++i])
	{
		if (!in(str[i], charset) && prev_in)
			counter++;
		prev_in = in(str[i], charset);
	}
	tab = (char **)malloc(sizeof(char *) * (counter + 1));
	tab[counter] = NULL;
	i = -1;
	while (++i < counter)
		tab[i] = malloc(sizeof(char) * (str_len + 1));
	return (tab);
}

void	print_in_tab(char *src, char *dest, char *charset)
{
	int	i;

	i = 0;
	while (src[i] && !in(src[i], charset))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		count;
	char	**tab;
	int		prev_in;

	tab = create_tab(str, charset);
	i = 0;
	count = 0;
	prev_in = 1;
	while (str[i])
	{
		if (!in(str[i], charset) && prev_in)
		{
			print_in_tab(str + i, tab[count], charset);
			count++;
		}
		prev_in = in(str[i], charset);
		i++;
	}
	return (tab);
}
