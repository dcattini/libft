/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcattini <dcattini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 13:27:39 by dcattini          #+#    #+#             */
/*   Updated: 2022/03/14 19:51:26 by dcattini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d;
	size_t	i;
	size_t	s;

	d = ft_strlen(dst);
	i = 0;
	s = ft_strlen(src);
	if (dstsize <= d)
		return (s += dstsize);
	else
		s += d;
	while (src[i] && (d + 1) < dstsize)
	{
		dst[d] = src[i];
		d++;
		i++;
	}
	dst[d] = '\0';
	return (s);
}
/*
#include <stdio.h>
int main()
{
	char dest[50] = "Bom dia,";
	char src[50] = " flor do dia";

	printf("%i\n%s", ft_strlcat(dest, src, 15), dest);
}*/
