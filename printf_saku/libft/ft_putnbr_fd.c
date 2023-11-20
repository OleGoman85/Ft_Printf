/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svesa <svesa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:43:59 by svesa             #+#    #+#             */
/*   Updated: 2023/11/07 16:27:15 by svesa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(int nbr, int fd)
{
	if (nbr == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return (nbr);
	}
	else
	{
		write(fd, "-", 1);
		nbr = nbr * -1;
	}
	return (nbr);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n < 0)
		n = ft_check(n, fd);
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		c = n % 10 + 48;
		write (fd, &c, 1);
	}
	else if (n < 10 && n != -2147483648)
	{
		c = n % 10 + 48;
		write(fd, &c, 1);
	}
}
