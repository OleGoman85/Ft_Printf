/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnumber.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svesa <svesa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:43:59 by svesa             #+#    #+#             */
/*   Updated: 2023/11/17 13:15:42 by svesa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check(int nbr)
{
	int	flag;

	flag = 0;
	flag += write(1, "-", 1);
	if (flag == -1)
		return (-1);
	nbr = nbr * -1;
	return (nbr);
}

static int	ft_putunsigned(unsigned int n)
{
	int		i;
	char	c;
	int		flag;

	i = 0;
	flag = 0;
	if (n > 9)
	{
		flag = ft_putunsigned(n / 10);
		if (flag == -1)
			return (-1);
		i += flag;
	}
	c = n % 10 + 48;
	flag = write(1, &c, 1);
	if (flag == -1)
		return (-1);
	return (i + 1);
}

static int	ft_putint(int n)
{
	int		i;
	char	c;
	int		flag;

	i = 0;
	flag = n;
	if (n < 0)
	{
		n = ft_check(n);
		i++;
		if (n == -1 && flag != -1)
			return (-1);
	}
	if (n > 9)
	{
		flag = ft_putint(n / 10);
		if (flag == -1)
			return (-1);
		i += flag;
	}
	c = n % 10 + 48;
	if (write(1, &c, 1) == -1)
		return (-1);
	return (i + 1);
}

int	ft_putnumber(long int n, char conv)
{
	int	flag;

	flag = 0;
	if (conv == 'u')
		return (ft_putunsigned((unsigned int)n));
	else
	{
		if ((int) n == -2147483648)
		{
			flag = write (1, "-2147483648", 11);
			if (flag == -1)
				return (-1);
			else
				return (11);
		}
		else
			return (ft_putint((int) n));
	}
}
