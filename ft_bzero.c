/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcattini <dcattini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:30:07 by dcattini          #+#    #+#             */
/*   Updated: 2022/03/14 15:57:57 by dcattini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*pointer;
	size_t			i;

	i = 0;
	pointer = (unsigned char *)s;
	while (i < n)
	{
		pointer[i] = 0;
		i++;
	}
}
