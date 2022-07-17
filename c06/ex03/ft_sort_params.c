/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaugues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 10:39:36 by psaugues          #+#    #+#             */
/*   Updated: 2022/07/17 17:52:44 by psaugues         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	size_s1;
	int	size_s2;

	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
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

void	print(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	loop(int i, int k, char **argv)
{
	char	*a;
	int		j;

	while (argv[i])
	{
		k = i;
		while (argv[++k])
		{
			if (ft_strcmp(argv[i], argv[k]) > 0)
			{
				printf("%d, %d\n", i, k);
				a = argv [i];
				argv[i] = argv[k];
				argv[k] = a;
			}
		}
		i++;
	}
	print(argv);
}

int	main(int argc, char **argv)
{
	int		i;
	int		k;

	k = 0;
	i = 1;
	(void)argc;
	loop(i, k, argv);
	return (0);
}
