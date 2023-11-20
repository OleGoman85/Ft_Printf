/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 11:50:34 by ogoman            #+#    #+#             */
/*   Updated: 2023/11/20 12:34:00 by ogoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list ap, char *str, size_t *counter)
{
	int	x;

	x = 0;
	if (*str == '\0')
		return (0);
	else if (*str == '%')
		x += ft_putchar_ft('%', counter);
	else if (*str == 'c')
		x += ft_putchar_ft(va_arg(ap, int), counter);
	else if (*str == 's')
		x += ft_putstr_ft(va_arg(ap, char *), counter);
	else if (*str == 'p')
		x += ft_putptr_ft(va_arg(ap, void *), counter);
	else if (*str == 'd' || *str == 'i')
		x += ft_putnbr_ft(va_arg(ap, int), counter);
	else if (*str == 'u')
		x += ft_putuni_ft(va_arg(ap, unsigned int), counter);
	else if (*str == 'x' || *str == 'X')
		x += ft_puthex_ft(va_arg(ap, unsigned int), counter, *str);
	return (x);
}

//rabochaja versija no nado umenwit do 25 strok

// int ft_format(va_list ap, char *str, size_t *counter)
// {
// 	if (*str == '\0')
// 		return (0);
// 	else if (*str == '%')
// 	{
// 		if (ft_putchar_ft('%', counter) == -1)
// 			return (-1);
// 	}
// 	else if (*str == 'c')
// 	{
// 		if (ft_putchar_ft(va_arg(ap, int), counter) == -1)
// 			return (-1);
// 	}
// 	else if (*str == 's')
// 	{
// 		if (ft_putstr_ft(va_arg(ap, char *), counter) == -1)
// 			return (-1);
// 	}
// 	else if (*str == 'p')
// 	{
// 		if (ft_putptr_ft(va_arg(ap, void *), counter) == -1)
// 			return (-1);
// 	}
// 	else if (*str == 'd' || *str == 'i')
// 	{
// 		if (ft_putnbr_ft(va_arg(ap, int), counter) == -1)
// 			return (-1);
// 	}
// 	else if (*str == 'u')
// 	{
// 		if (ft_putuni_ft(va_arg(ap, unsigned int), counter) == -1)
// 			return (-1);
// 	}
// 	else if (*str == 'x' || *str == 'X')
// 	{
// 		if (ft_puthex_ft(va_arg(ap, unsigned int), counter, *str) == -1)
// 			return (-1);
// 	}
// 	else
// 	{
// 		return (-1);
// 	}
// 	return (0);
// }