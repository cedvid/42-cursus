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

static int ft_word_count(char const *str, char c)
{
    int words;

    words = 0;
    while (*str)
    {
        if (*str == c)
            str++;
        else
        {
            words++;
            while (*str && *str != c)
                str++;
        }
    }
    return (words);
}

char    **ft_split(char const *s, char c)
{
    //find how many strings will be in arr
    int word_nbr;
    char    **res;

    word_nbr = ft_word_count(s, c);
    res = malloc(sizeof(*res) * (word_nbr + 1));
    if (!res)
        return (NULL);
    
}

int main(void)
{
    char str[12] = "hello*aloha*salut*guten tag*bonjour*nihao";
    printf("return: %s\n", ft_split(str, '*'));
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