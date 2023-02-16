/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidot <cvidot@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:02:19 by cvidot            #+#    #+#             */
/*   Updated: 2023/02/13 15:06:37 by cvidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (lst->next != NULL)
			lst = lst->next;
		else
			return (lst);
	}
	return (lst);
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

	printf("First node address: %p\n", new_node);
	printf("Second node address: %p\n", node2);
	printf("Last node address: %p\n", node3);

    printf("\nLast node is: %p\n", ft_lstlast(list));
    return (0);
}*/
