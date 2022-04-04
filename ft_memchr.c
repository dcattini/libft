/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcattini <dcattini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 18:33:07 by dcattini          #+#    #+#             */
/*   Updated: 2022/03/14 16:11:20 by dcattini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	p;

	i = 0;
	str = (unsigned char *)s;
	p = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == p)
		{
			return (str + i);
		}
		i++;
	}
	return (0);
}
