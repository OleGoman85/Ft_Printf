/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:58:57 by ogoman            #+#    #+#             */
/*   Updated: 2023/11/18 08:55:01 by ogoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list ap, char *str, size_t *counter)
{
	if (*str == '\0')
		return (0);
	else if (*str == '%')
		ft_putchar_ft('%', counter);
	else if (*str == 'c')
		ft_putchar_ft(va_arg(ap, int), counter);
	else if (*str == 's')
		ft_putstr_ft(va_arg(ap, char *), counter);
	else if (*str == 'p')
		ft_putptr_ft(va_arg(ap, void *), counter);
	else if (*str == 'd' || *str == 'i')
		ft_putnbr_ft(va_arg(ap, int), counter);
	else if (*str == 'u')
		ft_putuni_ft(va_arg(ap, unsigned int), counter);
	else if (*str == 'x' || *str == 'X')
	{
		if (*str == 'x')
			ft_puthex_ft(va_arg(ap, unsigned int), counter, HEX_LOW);
		else
			ft_puthex_ft(va_arg(ap, unsigned int), counter, HEX_UPP);
	}
	return (0);
}

static int	ft_printf_cleanup(va_list ap, int result)
{
	va_end(ap);
	return (result);
}

int	ft_printf(char const *format, ...)
{
	va_list	ap;
	size_t	counter;

	if (!format)
		return (-1);
	counter = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (ft_format(ap, (char *)format, &counter) == -1)
				return (ft_printf_cleanup(ap, -1));
		}
		else
		{
			if (ft_putchar_ft(*format, &counter) == -1)
				return (ft_printf_cleanup(ap, -1));
		}
		format++;
	}
	return (ft_printf_cleanup(ap, counter));
}
