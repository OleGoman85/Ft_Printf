/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svesa <svesa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:29:20 by svesa             #+#    #+#             */
/*   Updated: 2023/11/09 11:41:17 by svesa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;	
	size_t	magic_number;

	magic_number = 0 - 1;
	if (count && size && count > (magic_number / size))
		return (0);
	if (count == 0 || size == 0)
		return (ft_calloc(1, 1));
	ptr = malloc(count * size);
	if (ptr == 0)
		return (0);
	ft_bzero (ptr, count * size);
	return (ptr);
}
