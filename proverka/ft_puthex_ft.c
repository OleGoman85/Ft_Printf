/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_ft.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 09:38:46 by ogoman            #+#    #+#             */
/*   Updated: 2023/11/18 06:43:35 by ogoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_ft(unsigned int num, size_t *counter, int letter_case)
{
	char	hex_digit;

	if (num >= 16)
	{
		if (letter_case != HEX_LOW && letter_case != HEX_UPP)
			return (-1);
	}
	if (letter_case == HEX_LOW)
	{
		hex_digit = "0123456789abcdef"[num % 16];
	}
	else if (letter_case == HEX_UPP)
	{
		hex_digit = "0123456789ABCDEF"[num % 16];
	}
	else
	{
		return (-1);
	}
	if (ft_putchar_ft(hex_digit, counter) == -1)
		return (-1);
	return (0);
}
