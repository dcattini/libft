/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcattini <dcattini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 19:14:25 by dcattini          #+#    #+#             */
/*   Updated: 2022/03/22 19:39:47 by dcattini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*a;
	size_t	i;
	size_t	j;

	i = start;
	j = 0;
	if (s == 0)
		return (0);
	if (len > (size_t)ft_strlen(s))
		len = ft_strlen(s) + 1;
	a = (char *)malloc((len + 1) * sizeof(char));
	if (s == 0 || a == 0)
		return (0);
	while (i < (size_t)ft_strlen(s) && j < len)
	{
		a[j] = s[i];
		j++;
		i++;
	}
	a[j] = '\0';
	return (a);
}
