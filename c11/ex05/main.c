/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaugues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 04:30:34 by psaugues          #+#    #+#             */
/*   Updated: 2022/07/27 09:54:34 by psaugues         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int mod(int a, int b);
int	ft_atoi(char *str);
void	ft_char(char c);
void	ft_putnbr(int nb);

int	conditions(char *str, int a, int i, int ret)
{
	if (a % 2 == 0)
		ret = ret * 10 + str[i] - '0';
	else
		ret = ret * 10 - str[i] + '0';
	return (ret);
}

int index_of(char chr, char *str)
{
	int i;

	i = -1;
	while (str[++i])
	{
		if (str[i] == chr)
			return (i);
	}
	return (-1);
}

typedef int (*f) (int, int);                

int main(int argc, char **argv)
{ 
	int res;
	int	value1;
	int	value2;
	char *charset;

	charset = "+-*/%";
	if (argc != 4)
		return (0);

	res = 0;
	value1 = ft_atoi(argv[1]);
	value2 = ft_atoi(argv[3]);
	f func[5] = {add, sub, mul, div, mod};
	if (index_of(*argv[2], charset) == -1)
	{
		write(1, "0\n", 2);
		return (0);
	}
	res = (func[index_of(*argv[2], charset)])(value1, value2);
	ft_putnbr(res);
	return (0);
}
