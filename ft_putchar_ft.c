/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_ft.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 07:18:33 by ogoman            #+#    #+#             */
/*   Updated: 2023/11/13 08:28:57 by ogoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_ft(char c, size_t *counter)
{
	if (write(1, &c, 1) == 1)
	{
		(*counter)++;
		return ((unsigned char)c);
	}
	else
		return (EOF);
}
