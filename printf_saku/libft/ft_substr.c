/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svesa <svesa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 08:33:35 by svesa             #+#    #+#             */
/*   Updated: 2023/11/07 16:28:04 by svesa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_null(char *substr)
{
	substr = malloc(sizeof(char) * 1);
	if (substr == 0)
		return (0);
	substr[0] = '\0';
	return (substr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	slen;
	char			*substr;
	char			*temp;

	substr = 0;
	if (s == 0)
		return (0);
	slen = ft_strlen(s);
	if (start > slen)
		return (ft_null(substr));
	if (len > slen)
		len = slen - start;
	substr = malloc(sizeof(char) * (len + 1));
	if (substr == 0)
		return (0);
	s = s + start;
	temp = substr;
	while (len-- > 0)
		*temp++ = *s++;
	*temp = '\0';
	return (substr);
}
