/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcattini <dcattini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 15:30:02 by dcattini          #+#    #+#             */
/*   Updated: 2022/03/17 15:44:31 by dcattini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2", 2);
		n = 147483648;
		ft_putnbr_fd((n / 10), fd);
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
		if (n > 10)
		{
			ft_putnbr_fd((n / 10), fd);
		}
	}
	else if (n < 10)
	{
		ft_putchar_fd((n + '0'), fd);
		return ;
	}
	else
	{
		ft_putnbr_fd((n / 10), fd);
	}
	ft_putnbr_fd((n % 10), fd);
}
