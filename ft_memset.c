/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcattini <dcattini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 11:40:57 by dcattini          #+#    #+#             */
/*   Updated: 2022/03/14 15:55:25 by dcattini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*pointer;
	size_t			i;

	i = 0;
	pointer = (unsigned char *)str;
	while (i < n)
	{
		pointer[i] = (unsigned char)c;
		i++;
	}
	return (str);
}
