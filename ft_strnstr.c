/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcattini <dcattini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 17:54:57 by dcattini          #+#    #+#             */
/*   Updated: 2022/03/14 19:54:19 by dcattini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return ((char *)str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && (i + j) < len)
		{
			if (to_find[j] == '\0' && str[i + j] == '\0')
				return ((char *)&str[i]);
			j++;
		}
		if (to_find[j] == '\0')
			return ((char *)&str[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char	*big;
	char	*little;
	big = "Hello world";
	little = "world";
	printf("%s\n", strnstr(big, little, 9));
	printf("%s\n", ft_strnstr(big, little, 9));
}*/
