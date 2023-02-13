/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:17:06 by cvidot            #+#    #+#             */
/*   Updated: 2023/02/13 15:37:59 by cvidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_node;

	if (*lst == NULL)
	{
		*lst = new;
		new->next = NULL;
		return ;
	}
	last_node = ft_lstlast(*lst);
	last_node->next = new;
	new->next = NULL;
}

/*int main(void)
{
    t_list *new_node = ft_lstnew("42");
	t_list *node2 = ft_lstnew("43");
	t_list *node3 = ft_lstnew("44");
	t_list *list = NULL;

    ft_lstadd_front(&list, node3);
	ft_lstadd_front(&list, node2);
    ft_lstadd_front(&list, new_node);

	printf("First node address: %p\n", new_node);
	printf("Second node address: %p\n", node2);
	printf("Last node address: %p\n", node3);

	ft_lstadd_back(&list, new_node);

    printf("\nLast node is: %p\n", ft_lstlast(list));
    return (0);
}*/

/*Function name ft_lstadd_back
Prototype void ft_lstadd_back(t_list **lst, t_list *new);
Turn in files -
Parameters lst: The address of a pointer to the first link of
a list.
new: The address of a pointer to the node to be
added to the list.
Return value None
External functs. None
Description Adds the node ’new’ at the end of the list.*/
