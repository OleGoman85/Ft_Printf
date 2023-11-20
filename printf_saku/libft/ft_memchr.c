/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svesa <svesa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:09:53 by svesa             #+#    #+#             */
/*   Updated: 2023/11/01 17:24:38 by svesa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char			*str;
	size_t			i;
	unsigned char	ch;

	str = (char *)s;
	ch = c;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)str[i] == ch)
			return (str + i);
		i++;
	}
	return (0);
}
