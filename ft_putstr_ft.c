/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_ft.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 09:09:40 by ogoman            #+#    #+#             */
/*   Updated: 2023/11/11 11:14:08 by ogoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_ft(char *str, size_t *counter)
{
	size_t	str_len;

	str_len = 0;
	if (!str)
		return (1);
	while (str[str_len] != '\0')
		str_len++;
	write(1, str, str_len);
	(*counter += str_len);
	return (0);
}
