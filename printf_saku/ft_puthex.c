/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svesa <svesa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:35:49 by svesa             #+#    #+#             */
/*   Updated: 2023/11/17 13:15:43 by svesa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len(unsigned long int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n = n / 16;
		i++;
	}
	return (i);
}

static char	*ft_string_upper(char *str, unsigned long int n, int len)
{
	unsigned int	rem;

	str[len] = '\0';
	len--;
	rem = 0;
	while (n != 0)
	{
		rem = n % 16;
		if (rem < 10)
			str[len--] = rem + 48;
		else
			str[len--] = rem + 55;
		n = n / 16;
	}
	return (str);
}

static char	*ft_string_lower(char *str, unsigned long int n, int len)
{
	unsigned int	rem;

	str[len] = '\0';
	len--;
	rem = 0;
	while (n != 0)
	{
		rem = n % 16;
		if (rem < 10)
			str[len--] = rem + 48;
		else
			str[len--] = rem + 87;
		n = n / 16;
	}
	return (str);
}

int	ft_puthex(unsigned long int n, char conv)
{
	int		i;
	int		len;
	char	*hex;

	if (n == 0)
		return ((write(1, "0", 1)));
	len = ft_len(n);
	hex = (char *)malloc(sizeof(char) * (len + 1));
	if (hex == 0)
		return (-1);
	if (conv == 'x')
		hex = ft_string_lower(hex, n, len);
	else
		hex = ft_string_upper(hex, n, len);
	i = -1;
	while (hex[++i] != '\0')
	{
		if (write(1, &hex[i], 1) == -1)
		{
			free(hex);
			return (-1);
		}
	}
	free(hex);
	return (len);
}
