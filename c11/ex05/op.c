/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaugues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 07:15:21 by psaugues          #+#    #+#             */
/*   Updated: 2022/07/27 09:55:02 by psaugues         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

int add(int a, int b)
{
	return (a + b);
}

int sub(int a, int b)
{
	return (a - b);
}

int mul(int a, int b)
{
	return (a * b);
}

int div(int a, int b)
{
	if (b > 0)
		return (a / b);
	else
	{
		write(1, "Stop : division by zero\n", 24);
		return (1);
	}
}

int mod(int a, int b)
{
	if (b > 0)
		return (a % b);
	else
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (1);
	}
}
