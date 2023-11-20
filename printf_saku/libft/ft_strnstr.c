/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svesa <svesa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:14:11 by svesa             #+#    #+#             */
/*   Updated: 2023/11/01 11:31:14 by svesa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*needle == '\0' || *needle == 0)
		return (((char *)haystack));
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[j] && needle[j] != '\0')
		{
			i++;
			j++;
			if (needle[j] == '\0')
				return (((char *)haystack + i - j));
		}
		else
		{
			i = i - j + 1;
			j = 0;
		}
	}
	return (0);
}
