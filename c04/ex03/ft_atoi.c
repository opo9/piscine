/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaugues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 10:58:14 by psaugues          #+#    #+#             */
/*   Updated: 2022/07/14 14:23:40 by psaugues         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	conditions(char *str, int a, int i, int ret)
{
	if (a % 2 == 0)
		ret = ret * 10 + str[i] - '0';
	else
		ret = ret * 10 - str[i] + '0';
	return (ret);
}

int	ft_atoi(char *str)
{
	int	ret;
	int	a;
	int	i;

	a = 0;
	ret = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] > 8 && str[i] < 14))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			a += 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		ret = conditions(str, a, i, ret);
		i++;
	}
	return (ret);
}
