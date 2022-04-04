/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcattini <dcattini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 15:48:46 by dcattini          #+#    #+#             */
/*   Updated: 2022/03/23 17:19:21 by dcattini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len(long n)
{
	int	size;

	size = 0;
	if (n == 0)
	{
		size = 1;
	}
	if (n < 0)
	{
		size++;
		n = -n;
	}
	if (n > 0)
	{
		while (n > 0)
		{
			size++;
			n = n / 10;
		}
	}
	return (size);
}

static char	*array(int n, char *c, int size)
{
	if (n == -2147483648)
	{
		c[0] = '-';
		c[1] = '2';
		n = 147483648;
	}
	while (n > 0)
	{
		c[size] = (n % 10) + 48;
		n = n / 10;
		size--;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	char	*c;
	int		size;

	size = len(n);
	c = (char *)malloc((size + 1 * sizeof(char)));
	if (c == 0)
		return (NULL);
	c[size] = '\0';
	size--;
	if (n == 0)
	{
		c[0] = 48;
		return (c);
	}
	if (n < 0)
	{
		c[0] = '-';
		n = -n;
	}
	array(n, c, size);
	return (c);
}
