/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidot <cvidot@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:52:04 by cvidot            #+#    #+#             */
/*   Updated: 2023/02/13 16:52:39 by cvidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current_node;

	if (!lst || !f)
		return ;
	current_node = lst;
	while (current_node)
	{
		(*f)(current_node->content);
		current_node = current_node->next;
	}
}
/*Function name ft_lstiter
Prototype void ft_lstiter(t_list *lst, void (*f)(void *));
Turn in files -
Parameters lst: The address of a pointer to a node.
f: The address of the function used to iterate on
the list.
Return value None
External functs. None
Description Iterates the list ’lst’ and applies the function
’f’ on the content of each node.*/
