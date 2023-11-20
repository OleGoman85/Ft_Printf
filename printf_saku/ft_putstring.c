/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstring.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svesa <svesa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:13:11 by svesa             #+#    #+#             */
/*   Updated: 2023/11/17 13:15:41 by svesa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstring(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	if (!str)
	{
		flag = write(1, "(null)", 6);
		if (flag == -1)
			return (-1);
		else
			return (6);
	}
	while (str[i] != '\0')
	{
		flag = write (1, &str[i], 1);
		if (flag == -1)
			return (-1);
		i++;
	}
	return (i);
}
