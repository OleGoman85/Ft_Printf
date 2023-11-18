/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuni_ft.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:29:06 by ogoman            #+#    #+#             */
/*   Updated: 2023/11/18 11:12:00 by ogoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putuni_ft(unsigned int num, size_t *counter)
{
	if (!num)
		return (-1);
	if (num < 0)
		return (-1);
	if (!*counter)
		return (-1);
	if (num / 10)
	{
		if (ft_putuni_ft(num / 10, counter) == -1)
			return (-1);
	}
	if (ft_putchar_ft((num % 10) + '0', counter) == -1)
	{
		return (-1);
	}
	return (0);
}

// int	ft_putuni_ft(unsigned int num, size_t *counter)
// {
// 	if (!num)
// 		return (-1);
// 	if (num / 10)
// 	{
// 		ft_putuni_ft(num / 10, counter);
// 	}
// 	ft_putchar_ft((num % 10) + '0', counter);
// 	return (0);
// }