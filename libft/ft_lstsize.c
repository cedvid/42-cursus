/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidot <cvidot@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:37:11 by cvidot            #+#    #+#             */
/*   Updated: 2023/02/16 11:02:09 by cvidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

int	ft_lstsize(t_list *lst)
{
	t_list	*node;
	int		count;

	node = lst;
	count = 0;
	while (node)
	{
		count++;
		node = node->next;
	}
	return (count);
}
/*
int main(void)
{
    t_list *new_node = ft_lstnew("42");
	t_list *node2 = ft_lstnew("43");
	t_list *node3 = ft_lstnew("44");
	t_list *list = NULL;

    ft_lstadd_front(&list, node3);
	ft_lstadd_front(&list, node2);
    ft_lstadd_front(&list, new_node);

    printf("Node count is: %d\n", ft_lstsize(list));
    return (0);
}*/

/*Function name ft_lstsize
Prototype int ft_lstsize(t_list *lst);
Turn in files -
Parameters lst: The beginning of the list.
Return value The length of the list
External functs. None
Description Counts the number of nodes in a list.*/
