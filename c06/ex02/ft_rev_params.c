/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaugues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 10:48:48 by psaugues          #+#    #+#             */
/*   Updated: 2022/07/17 10:30:17 by psaugues         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*stock;

	(void) argc;
	(void) argv;
	i = 1;
	j = 0;
	while (argv[i])
	{
		j = 0;
		stock = argv[argc - i];
		while (stock[j])
		{
			write(1, &stock[j], 1);
			j++;
		}
		if (i < argc - 1)
			write(1, "\n", 1);
		i++;
	}
}
