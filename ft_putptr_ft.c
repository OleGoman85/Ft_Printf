/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_ft.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 12:08:28 by ogoman            #+#    #+#             */
/*   Updated: 2023/11/16 14:16:18 by ogoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	print_hex_digit(int digit, size_t *counter)
{
	char	hex_char;

	if (digit < 10)
	{
		hex_char = digit + '0';
	}
	else
	{
		hex_char = digit - 10 + 'a';
	}
	write(1, &hex_char, 1);
	(*counter)++;
}

static void	print_value_as_hex(uintptr_t value, size_t *counter)
{
	if (value >= 16)
	{
		print_value_as_hex(value / 16, counter);
	}
	print_hex_digit(value % 16, counter);
}

void	ft_putptr_ft(void *ptr, size_t *counter)
{
	long unsigned	address;

	address = (long unsigned)ptr;
	write(1, "0x", 2);
	*counter += 2;
	print_value_as_hex(address, counter);
}
