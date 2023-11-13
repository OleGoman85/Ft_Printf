/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:58:57 by ogoman            #+#    #+#             */
/*   Updated: 2023/11/13 06:46:05 by ogoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format(va_list ap, char *str, size_t *counter)
{
	if (*str == '\0')
		return ;
	else if (*str == '%')
		ft_putchar_ft('%', counter);
	else if (*str == 'c')
		ft_putchar_ft(va_arg(ap, int), counter);
	else if (*str == 's')
		ft_putstr_ft(va_arg(ap, char *), counter);
	else if (*str == 'p')
		ft_putptr_ft(va_arg(ap, void *), counter);
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
			ft_format(ap, (char *)format, &counter);
		}
		else
		{
			ft_putchar_ft(*format, &counter);
		}
		format++;
	}
	va_end(ap);
	return (counter);
}
