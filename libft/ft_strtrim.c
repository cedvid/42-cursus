/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 12:44:19 by cvidot            #+#    #+#             */
/*   Updated: 2023/01/16 12:44:31 by cvidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

// int	ft_strlen(const char *s)
// {
// 	int	i;

// 	i = 0;
// 	while (s[i] != '\0')
// 		i++;
// 	return (i);
// }

// void	*ft_memcpy(void *dest, const void *src, size_t n)
// {
// 	unsigned int	i;

// 	i = 0;
// 	while (i < n)
// 	{
// 		((char *)dest)[i] = ((char *)src)[i];
// 		i++;
// 	}
// 	return (dest);
// }

// int is_set(char const *set, char c)
// {
//     while (*set)
//     {
//         if (*set == c)
//             return (1);
//         set++;
//     }
//     return (0);
// }

char    *ft_strtrim(char const *s1, char const *set)
{
    char    *beg;
    char    *end;
    char    *trim_str;

    beg = (char *) s1;
    end = beg + ft_strlen(s1) - 1;
    while (is_set(set, *beg))
        beg++;
    
    start = i;
    i = 0;
    while ((check_set(str[--end], set)) == 1)
        i++;
    new = (char *)malloc(sizeof(char) * (end - start) + 1);
    ft_memcpy(new, &str[start], (end - start + 1));
    return (new);
}

// int main(void)
// {
//     printf("the trimmed string: %s\n", ft_strtrim("lorem ipsum dolor sit amet", "l"));
//     return 0;
// }
