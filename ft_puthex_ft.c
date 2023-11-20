/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_ft.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 09:38:46 by ogoman            #+#    #+#             */
/*   Updated: 2023/11/20 08:27:30 by ogoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_ft(unsigned int num, size_t *counter, char str)
{
	char	hex_digit;

	if (num >= 16)
	{
		if (str == 'x')
			hex_digit = "0123456789abcdef"[num % 16];
		else if (str == 'X')
			hex_digit = "0123456789ABCDEF"[num % 16];
		else
			return (-1);
		if (ft_puthex_ft(num / 16, counter, str) == -1)
			return (-1);
	}
	else
	{
		if (str == 'x')
			hex_digit = "0123456789abcdef"[num % 16];
		else if (str == 'X')
			hex_digit = "0123456789ABCDEF"[num % 16];
		else
			return (-1);
	}
	if (ft_putchar_ft(hex_digit, counter) == -1)
		return (-1);
	return (0);
}
