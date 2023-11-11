/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:58:57 by ogoman            #+#    #+#             */
/*   Updated: 2023/11/10 16:11:56 by ogoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int	ft_printf(char const *str, ...)
{
	va_list	pa;
	size_t	counter;

	if (!str)
		return (NULL);
	counter = 0;
	va_start(pa, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			ft_format(pa, (char *)str, &counter);
		}
		else
		{
			ft_putchar(*str, &counter);
		}
		str++;
	}
	va_end(pa);
	return (counter);
}
