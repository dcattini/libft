/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcattini <dcattini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:09:50 by dcattini          #+#    #+#             */
/*   Updated: 2022/03/14 16:27:53 by dcattini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	a;

	a = 0;
	while (s1[a] && s2[a] && (a < n))
	{
		if (s1[a] != s2[a])
		{
			break ;
		}
		a++;
	}
	if (a == n)
	{
		return (0);
	}
	return ((((unsigned char *)s1)[a]) - (((unsigned char *)s2)[a]));
}
/*
#include <stdio.h>
#include <string.h>

int		main(void)
{

	char *s1 = "\nre";
    char *s2 = "ryr";
	unsigned int a;

	a = 2;
    strncmp(s1, s2, a);
    printf("%d\n", ft_strncmp(s1, s2, a));
    printf("%d", strncmp(s1, s2, a));
}*/
