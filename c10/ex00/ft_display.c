/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaugues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 10:18:03 by psaugues          #+#    #+#             */
/*   Updated: 2022/07/22 11:07:48 by psaugues         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

void	ft_display(char *file_name)
{
	int	file_read;


}

int	main(int argc, char **argv)
{
	if (argc > 2)
		write(1,"Too many arguments.\n",20);
	else if (argc < 2)
		write(1, "File name missing.\n",18);
	else
		ft_display(argv[1]);
	return (0);	
}
