/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_ft.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 09:38:46 by ogoman            #+#    #+#             */
/*   Updated: 2023/11/15 09:57:58 by ogoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex_ft(uintmax_t num, size_t *counter, int letter_case)
{
	if (num >= 16)
		ft_puthex_ft(num / 16, counter, letter_case);
	if (letter_case == HEX_LOW)
		ft_putchar_ft("0123456789abcdef"[num % 16], counter);
	else if (letter_case == HEX_UPP)
		ft_putchar_ft("0123456789ABCDEF"[num % 16], counter);
}