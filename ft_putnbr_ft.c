/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_ft.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 07:03:43 by ogoman            #+#    #+#             */
/*   Updated: 2023/11/14 15:55:52 by ogoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

static void	ft_max_min(size_t *counter)
{
	char	*max_min;
	int		i;

	i = 0;
	max_min = "-2147483648";
	while (*max_min != '\0')
	{
		write(1, max_min, 1);
		max_min++;
		(*counter)++;
	}
}

void	ft_putnbr_ft(int num, size_t *counter)
{
	if (num == -2147483648)
	{
		ft_max_min(counter);
		return ;
	}
	if (num < 0 && num > -2147483648)
	{
		ft_putchar_ft('-', counter);
		num = -num;
	}
	if (num / 10)
	{
		ft_putuni_ft(num / 10, counter);
	}
	if (num > 0)
	{
		ft_putchar_ft((num % 10) + '0', counter);
	}
}
