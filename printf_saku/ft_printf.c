/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svesa <svesa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:17:54 by svesa             #+#    #+#             */
/*   Updated: 2023/11/17 14:12:45 by svesa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_checktype(va_list args, const char str)
{
	int	i;

	i = 0;
	if (str == '%')
		i += ft_putchar(str);
	else if (str == 'c')
		i += ft_putchar(va_arg(args, int));
	else if (str == 's')
		i += ft_putstring(va_arg(args, char *));
	else if (str == 'p')
		i += ft_putptr(va_arg(args, unsigned long int));
	else if (str == 'i' || str == 'd' || str == 'u')
		i += ft_putnumber(va_arg(args, long int), str);
	else if (str == 'x' || str == 'X')
		i += ft_puthex(va_arg(args, unsigned int), str);
	return (i);
}

static int	ft_iteratestring(const char *str, va_list args)
{
	int	len;
	int	flag;

	len = 0;
	while (*str)
	{
		if (*str == '%')
		{
			flag = ft_checktype(args, *++str);
			if (flag == -1)
				return (-1);
			len += flag;
		}
		else
		{
			if (ft_putchar(*str) == -1)
				return (-1);
			len++;
		}
		str++;
	}
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		ret;
	va_list	args;

	va_start(args, str);
	ret = ft_iteratestring(str, args);
	va_end(args);
	return (ret);
}
