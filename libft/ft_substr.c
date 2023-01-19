/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 12:42:33 by cvidot            #+#    #+#             */
/*   Updated: 2023/01/16 12:43:37 by cvidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *sub;
    unsigned char   *str;
    unsigned int    i;

    sub = (char *)malloc(sizeof(char) * len + 1);
    str = (unsigned char *) s;
    i = 0;
    if (!sub)
        return (NULL);
    while (i < len)
    {
        sub[i] = s[start + i];
        i++;
    }
    sub[i] = '\0';
    return (sub);
}