/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svesa <svesa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:36:08 by svesa             #+#    #+#             */
/*   Updated: 2023/11/07 16:04:10 by svesa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr1;
	t_list	*ptr2;

	ptr1 = *lst;
	ptr2 = *lst;
	while (ptr1)
	{
		ptr2 = ptr2->next;
		(del)(ptr1->content);
		free(ptr1);
		ptr1 = ptr2;
	}
	*lst = 0;
}
