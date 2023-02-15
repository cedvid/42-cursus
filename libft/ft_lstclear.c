/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:50:51 by cvidot            #+#    #+#             */
/*   Updated: 2023/02/13 16:51:50 by cvidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

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

int main(void)
{
    t_list *new_node = ft_lstnew("42");
	t_list *node2 = ft_lstnew("43");
	t_list *node3 = ft_lstnew("44");
	t_list *list = NULL;

    ft_lstadd_front(&list, node3);
	ft_lstadd_front(&list, node2);
    ft_lstadd_front(&list, new_node);

    printf("Original linked list:\n");
    while (list != NULL)
	{
        printf("%s\n", (char *)list->content);
        list = list->next;
    }

    ft_lstclear(&list, free);

    printf("Cleared linked list:\n");
    while (list != NULL)
	{
        printf("%s\n", (char *)list->content);
        list = list->next;
    }

    return 0;
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
