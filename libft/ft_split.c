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
#include <stdio.h>  // remove later

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

char **ft_split(char const *s, char c)
{
    int str_nbr;
    char **res;
    int i;
    int current_str;
    int start;
    int length;

    str_nbr = ft_str_count(s, c);
    res = (char **)malloc(sizeof(char *) * (str_nbr + 1));
    if (!res)
        return (NULL);
    i = 0;
    current_str = 0;
    while (s[i])
    {
        while (s[i] == c)
            i++;
        start = i;
        length = 0;
        while (s[i] && s[i] != c)
        {
            length++;
            i++;
        }
        res[current_str] = (char *)malloc(sizeof(char) * length + 1);
        if (!res[current_str])
            return (NULL);
        ft_strlcpy(res[current_str], &s[start], length + 1);
        res[current_str][length] = '\0';
        current_str++;
    }
    res[current_str] = NULL;
    return (res);
}

int main(void)
{
    char str[42] = "hello*aloha*salut*guten tag*bonjour*nihao";
    char c = '*';
    char **arr = ft_split(str, c);
    int i = 0;

    while (arr[i])
    {
        printf("%s\n", arr[i]);
        i++;
    }

    i = 0;
    while (arr[i])
    {
        free(arr[i]);
        i++;
    }
    free(arr);
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