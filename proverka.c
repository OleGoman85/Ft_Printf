/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   proverka.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 11:17:52 by ogoman            #+#    #+#             */
/*   Updated: 2023/11/13 15:30:27 by ogoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int	a;
	int	*ptr;

	ft_printf("oLeg\n");
	ft_printf("%c\n", 'v');
	ft_printf("%s\n", "stRing");
	ft_printf("%%\n");

	a = 345;
	ptr = &a;
	ft_printf("Address: %p\n", ptr);
	return (0);
}