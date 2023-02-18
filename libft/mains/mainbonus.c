#include "libft.h"
#include <stdio.h>
#include <ctype.h>

void ft_print_node_content(void *content)
{
    printf("%s\n", (char*)content);
}

void del(void *content)
{
    if (content)
    {
        free(content);
    }
}

void    *ft_capitalize(void *content)
{
    char    *str;
    char    *new_str;
    size_t  len;
    size_t  i;

    str = (char *)content;
    len = ft_strlen(str);
    new_str = (char *)ft_calloc(len + 1, sizeof(char));
    if (!new_str)
        return (NULL);
    i = 0;
    while (i < len)
    {
        new_str[i] = ft_toupper(str[i]);
        i++;
    }
    return (new_str);
}

int main(void)
{
    t_list *list = NULL;
    t_list *node3 = ft_lstnew(ft_strdup("forty-four"));
    t_list *node2 = ft_lstnew(ft_strdup("forty-three"));
    t_list *node1 = ft_lstnew(ft_strdup("forty-two"));
    
    //TEST LSTADD FRONT AND LSTNEW AND LSTITER
    ft_lstadd_front(&list, node3);
    ft_lstadd_front(&list, node2);
    ft_lstadd_front(&list, node1);
    printf("Printing the content of list:\n");
    ft_lstiter(list, &ft_print_node_content);
    printf("\n");

    //TEST LSTADD BACK AND LSTITER
    printf("Printing the content of list with new node:\n");
    ft_lstadd_back(&list, ft_lstnew(ft_strdup("Newly created node")));
    ft_lstiter(list, &ft_print_node_content);
    printf("\n");

    ///TEST LSTSIZE
    printf("Printing list size: %d\n", ft_lstsize(list));
    //TEST LSTLAST
    printf("Printing last node: %s\n", (char*)ft_lstlast(list)->content);
    printf("\n");

    //TEST LSTMAP
    t_list *new_list = ft_lstmap(list, &ft_capitalize, &del);
    printf("Printing the content of new_list capitalized with ft_lstmap:\n");
    ft_lstiter(new_list, &ft_print_node_content);
    printf("\n");

    //TEST LSTCLEAR AND LSTDELONE
    ft_lstclear(&list, &del);
    while (new_list)
    {
        ft_lstdelone(new_list, &del);
        new_list = new_list->next;
    }
    printf("Printing content of lists (this should print nothing):\n");
    ft_lstiter(list, &ft_print_node_content);
    ft_lstiter(new_list, &ft_print_node_content);
    return 0;
}
