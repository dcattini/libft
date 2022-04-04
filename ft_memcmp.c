/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcattini <dcattini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 16:45:10 by dcattini          #+#    #+#             */
/*   Updated: 2022/03/14 16:13:51 by dcattini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			a;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	a = 0;
	if (n == 0)
	{
		return (0);
	}
	while (a < n)
	{
		if (str1[a] != str2[a])
		{
			return ((str1[a]) - (str2[a]));
		}
		a++;
	}
	return (0);
}
