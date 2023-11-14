/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuni_ft.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:29:06 by ogoman            #+#    #+#             */
/*   Updated: 2023/11/14 15:48:49 by ogoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putuni_ft(unsigned int num, size_t *counter)
{
	if (num / 10)
	{
		ft_putuni_ft(num / 10, counter);
	}
	if (num > 0)
	{
		ft_putchar_ft((num % 10) + '0', counter);
	}
}
