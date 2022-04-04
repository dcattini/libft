/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcattini <dcattini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 19:52:20 by dcattini          #+#    #+#             */
/*   Updated: 2022/03/14 16:44:06 by dcattini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*a;
	int		len_total;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (s1 == 0 || s2 == 0)
		return (NULL);
	len_total = ft_strlen(s1) + ft_strlen(s2);
	a = malloc((len_total + 1) * sizeof(char));
	if (a == 0)
		return (NULL);
	while (s1[j] && i < len_total)
	{
		a[i++] = s1[j++];
	}
	j = 0;
	while (s2[j] && i < (len_total))
	{
		a[i++] = s2[j++];
	}
	a[i] = '\0';
	return (a);
}
