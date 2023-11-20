/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svesa <svesa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:35:41 by svesa             #+#    #+#             */
/*   Updated: 2023/11/09 11:58:54 by svesa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void *))
{
	t_list	*start;
	t_list	*current;

	if (lst == 0 || f == 0 || del == 0)
		return (0);
	start = ft_lstnew(f(lst->content));
	if (start == 0)
		return (0);
	current = start;
	while (lst->next)
	{
		lst = lst->next;
		current->next = ft_lstnew(f(lst->content));
		if (current->next == 0)
		{
			del(current->next);
			ft_lstclear(&start, del);
			return (0);
		}
		current = current->next;
	}
	return (start);
}
