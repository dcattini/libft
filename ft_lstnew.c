/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcattini <dcattini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 20:56:45 by dcattini          #+#    #+#             */
/*   Updated: 2022/03/23 19:01:46 by dcattini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lista;

	lista = (t_list *)malloc(sizeof(t_list));
	if (lista == 0)
		return (0);
	lista->content = content;
	lista->next = NULL;
	return (lista);
}
// void   printlist(t_list *lista)
// {   
// 	while (lista != NULL)
// 	{
// 		printf("%c\n", lista->content);
// 		lista = lista->next;
// 	}
// }
// int main(int ac, char **av)
// {
// 	t_list *lista;
// 	t_list *tmp;
// 	int    i;

// 	i = 2;
// 	lista = ft_lstnew(av[1][0]);
// 	tmp = lista;
// 	while (i < ac)
// 	{
// 		tmp->next = ft_lstnew(av[i][0]);
// 		tmp = tmp->next;
// 		i++;
// 	}

// 	printlist(lista);
// }
