/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svesa <svesa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 11:53:34 by svesa             #+#    #+#             */
/*   Updated: 2023/11/07 16:10:51 by svesa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		dlen;
	size_t		slen;
	const char	*s;
	char		*d;
	size_t		r;

	d = dst;
	s = (char *)src;
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (dlen > dstsize || dstsize == 0)
		r = dstsize + slen;
	else
		r = dlen + slen;
	while (*s != '\0' && (dlen + 1) < dstsize)
		d[dlen++] = *s++;
	d[dlen] = '\0';
	return (r);
}
