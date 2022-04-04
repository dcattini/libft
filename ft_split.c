/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcattini <dcattini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:42:44 by dcattini          #+#    #+#             */
/*   Updated: 2022/03/23 17:20:30 by dcattini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countwords(char const *s, char c)
{
	int	i;
	int	prima;
	int	word;

	i = 0;
	prima = 0;
	word = 0;
	if (s == 0 || c == 0)
		return (0);
	while (s[i] != 0)
	{
		if (s[i] != c && prima == 0)
		{
			prima = 1;
			word++;
		}
		else if (s[i] == c)
		{
			prima = 0;
		}
		i++;
	}
	return (word);
}

static char	*wordmemo(char const *s, int start, int end)
{
	int		i;
	char	*word;

	i = 0;
	word = malloc((end - start + 1) * sizeof(char));
	if (word == 0)
		return (0);
	while (start < end)
	{
		word[i] = s[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

static char	**spliter(char **split, char const *s, char c)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	start = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || i == ft_strlen(s)) && start >= 0)
		{
			split[j] = wordmemo(s, start, i);
			j++;
			start = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	if (s == 0)
		return (0);
	split = malloc((countwords(s, c) + 1) * sizeof(char *));
	if (split == 0)
		return (0);
	return (spliter(split, s, c));
}
