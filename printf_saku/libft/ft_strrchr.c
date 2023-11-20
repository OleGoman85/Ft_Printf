/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svesa <svesa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:32:42 by svesa             #+#    #+#             */
/*   Updated: 2023/11/02 14:54:18 by svesa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*str;
	unsigned char	ch;
	int				l;

	str = (char *)s;
	ch = c;
	l = ft_strlen(s);
	while (l >= 0)
	{
		if (s[l] == ch)
			return (str + l);
		l--;
	}
	return (0);
}
