#include "libft.h"
#include <stdio.h>

void    ft_lstadd_front(t_list **lst, t_list *new)
{
    new->next = *lst;
    *lst = new;
}

int main(void)
{
    t_list *new_node = ft_lstnew("42");
    t_list *second_node = ft_lstnew("Not 42");
    t_list *list = NULL;

    ft_lstadd_front(&list, second_node);
    ft_lstadd_front(&list, new_node);
    
    printf("Before:\n");
    while (list != NULL)
    {
        printf("%s ", (char *)list->content);
        list = list->next;
    }
    printf("\n");

    printf("After:\n");
    ft_lstadd_front(&list, new_node);
    ft_lstadd_front(&list, second_node);

    while (list != NULL)
    {
        printf("%s ", (char *)list->content);
        list = list->next;
    }
    printf("\n");

    return (0);
}

/*Function name ft_lstadd_front
Prototype void ft_lstadd_front(t_list **lst, t_list *new);
Parameters lst: The address of a pointer to the first link of
a list.
new: The address of a pointer to the node to be
added to the list.
Return value None
External functs. None
Description Adds the node ’new’ at the beginning of the list.*/