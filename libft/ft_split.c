/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 12:44:41 by cvidot            #+#    #+#             */
/*   Updated: 2023/01/16 12:44:53 by cvidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h> //remove later
#include <stdio.h> // remove later

static int ft_str_count(char const *str, char c)
{
    int count;

    count = 0;
    while (*str)
    {
        if (*str != c)
        {
            count++;
            while (*str && *str != c)
                str++;
        }
        else
            str++;
    }
    return (count);
}

// char    **ft_split(char const *s, char c)
// {
//     //find how many strings will be in arr
//     int word_nbr;
//     char    **res;

//     word_nbr = ft_word_count(s, c);
//     res = malloc(sizeof(*res) * (word_nbr + 1));
//     if (!res)
//         return (NULL);
    
// }

int main(void)
{
    char str[42] = "hello*aloha*salut*guten tag*bonjour*nihao";
    printf("return: %d\n", ft_str_count(str, '*'));
    return (0);
}

/* Function name ft_split
Prototype char **ft_split(char const *s, char c);

Parameters s: The string to be split.
            c: The delimiter character.

Return value The array of new strings resulting from the split.
NULL if the allocation fails.

External functs. malloc, free

Description Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter. The array must end
with a NULL pointer. */