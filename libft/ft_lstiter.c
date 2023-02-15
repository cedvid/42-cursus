/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:52:04 by cvidot            #+#    #+#             */
/*   Updated: 2023/02/13 16:52:39 by cvidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*node;

	if (!lst)
		return ;
	node = lst;
	while (node)
	{
		(*f)(node->content);
		node = node->next;
	}
}
/*
void print_node(void *content)
{
    printf("%s\n", (char *)content);
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

	ft_lstiter(list, print_node);

    return (0);
}*/

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
