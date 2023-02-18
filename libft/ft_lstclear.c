/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidot <cvidot@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:50:51 by cvidot            #+#    #+#             */
/*   Updated: 2023/02/16 11:01:49 by cvidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*node;

	if (!lst)
		return ;
	while (*lst)
	{
		node = *lst;
		*lst = node->next;
		ft_lstdelone(node, del);
	}
}
/*Function name ft_lstclear
Prototype void ft_lstclear(t_list **lst, void (*del)(void
*));
Turn in files -
Parameters lst: The address of a pointer to a node.
del: The address of the function used to delete
the content of the node.
Return value None
External functs. free
Description Deletes and frees the given node and every
successor of that node, using the function ’del’
and free(3).
Finally, the pointer to the list must be set to
NULL.*/
