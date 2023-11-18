/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_ft.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 07:03:43 by ogoman            #+#    #+#             */
/*   Updated: 2023/11/18 08:35:20 by ogoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_max_min(size_t *counter)
{
	char	*max_min;

	max_min = "-2147483648";
	while (*max_min != '\0')
	{
		if (ft_putchar_ft(*max_min, counter) == -1)
			return (-1);
		max_min++;
		(*counter)++;
	}
	return (0);
}

int	ft_putnbr_ft(int num, size_t *counter)
{
	if (num == INT_MIN)
	{
		if (ft_max_min(counter) == -1)
			return (-1);
		return (0);
	}
	if (num < 0)
	{
		if (ft_putchar_ft('-', counter) == -1)
			return (-1);
		num = -num;
	}
	if (num / 10)
	{
		if (ft_putnbr_ft(num / 10, counter) == -1)
			return (-1);
	}
	if (ft_putchar_ft((num % 10) + '0', counter) == -1)
		return (-1);
	return (0);
}

// static void	ft_max_min(size_t *counter)
// {
// 	char	*max_min;

// 	max_min = "-2147483648";
// 	while (*max_min != '\0')
// 	{
// 		write(1, max_min, 1);
// 		max_min++;
// 		(*counter)++;
// 	}
// }

// int	ft_putnbr_ft(int num, size_t *counter)
// {
// 	if (num == -2147483648)
// 	{
// 		ft_max_min(counter);
// 		return ;
// 	}
// 	if (num < 0)
// 	{
// 		ft_putchar_ft('-', counter);
// 		num = -num;
// 	}
// 	if (num / 10)
// 	{
// 		ft_putnbr_ft(num / 10, counter);
// 	}
// 	ft_putchar_ft((num % 10) + '0', counter);
// }
