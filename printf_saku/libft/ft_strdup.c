/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svesa <svesa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:49:15 by svesa             #+#    #+#             */
/*   Updated: 2023/11/06 16:47:32 by svesa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*d;

	i = 0;
	while (src[i] != '\0')
		i++;
	d = (char *)malloc(i * sizeof(char) + 1);
	if (d == 0)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		d[i] = src[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}
