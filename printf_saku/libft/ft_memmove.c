/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svesa <svesa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:50:57 by svesa             #+#    #+#             */
/*   Updated: 2023/11/01 10:36:14 by svesa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*cdest;
	char	*csrc;

	cdest = ((char *)dest);
	csrc = ((char *)src);
	if (cdest == csrc)
		return (dest);
	if (csrc < cdest)
	{
		while (n-- != 0)
			cdest[n] = csrc[n];
	}
	else
	{
		while (n-- != 0)
			*(cdest++) = *(csrc++);
	}
	return (dest);
}
