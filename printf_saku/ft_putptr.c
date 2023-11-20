/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svesa <svesa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:24:49 by svesa             #+#    #+#             */
/*   Updated: 2023/11/17 13:15:42 by svesa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long int ptr)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	i += write (1, "0x", 2);
	if (i == -1)
		return (-1);
	if (ptr == 0)
	{
		flag = write (1, "0", 1);
		if (flag == -1)
			return (-1);
		else
			return (i + flag);
	}
	else
		flag = ft_puthex(ptr, 'x');
	if (flag == -1)
		return (-1);
	else
		i = i + flag;
	return (i);
}
