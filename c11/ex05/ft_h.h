/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_h.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaugues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 09:50:37 by psaugues          #+#    #+#             */
/*   Updated: 2022/07/27 09:53:35 by psaugues         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

#include <unistd.h>

int		add(int a, int b);
int		sub(int a, int b);
int		mul(int a, int b);
int		div(int a, int b);
int		mod(int a, int b);
int		ft_atoi(char *str);
void	ft_char(char c);
void	ft_putnbr(int nb);
int		conditions(char *str, int a, int i, int ret);

#endif
