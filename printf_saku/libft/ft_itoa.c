/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svesa <svesa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 10:05:51 by svesa             #+#    #+#             */
/*   Updated: 2023/11/07 16:26:56 by svesa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	unsigned int	i;
	unsigned int	nbr;

	i = 1;
	if (n < 0)
	{
		nbr = n * -1;
		i++;
	}
	else
		nbr = n;
	while (nbr > 9)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

static char	*ft_makestring(char *str, int len, int n)
{
	unsigned int	nbr;

	if (n < 0)
	{
		nbr = n * -1;
		str[0] = '-';
	}
	else
		nbr = n;
	len--;
	while (len >= 0)
	{
		str[len--] = nbr % 10 + 48;
		nbr = nbr / 10;
		if (n < 0 && len == 0)
			break ;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int				len;
	char			*str;

	len = ft_len(n);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (str == 0)
		return (0);
	str[len] = '\0';
	str = ft_makestring(str, len, n);
	return (str);
}
