/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcattini <dcattini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 18:45:07 by dcattini          #+#    #+#             */
/*   Updated: 2022/03/14 16:15:57 by dcattini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*a;
	int		i;
	int		size;

	i = 0;
	size = ft_strlen(s1);
	a = malloc((size + 1 * sizeof(char)));
	if (a == 0)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		a[i] = s1[i];
		i++;
	}
	a[i] = '\0';
	return (a);
}
