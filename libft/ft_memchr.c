/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 11:58:02 by cvidot            #+#    #+#             */
/*   Updated: 2023/01/16 11:58:04 by cvidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned int i;
    unsigned char   *str;

    i = 0;
    str = (unsigned char *)s;
    while (str[i] != c && i < n)
        i++;
    if (str[i] == c)
        return (&str[i]);
    else
        return (0);
}