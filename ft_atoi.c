/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcattini <dcattini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:22:16 by dcattini          #+#    #+#             */
/*   Updated: 2022/03/14 16:29:03 by dcattini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	unsigned int	num;
	int				i;
	int				neg;

	i = 0;
	num = 0;
	neg = 1;
	while ((str[i] >= '\t' && str[i] <= '\r') || (str [i] == ' '))
	{
		i++;
	}
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = ((num * 10) + (str[i] - 48));
		i++;
	}
	return (num * neg);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[] = "  -85265g55";

	printf("%d\n", ft_atoi(str));
	printf("%d", atoi(str));
    return 0;
}*/
