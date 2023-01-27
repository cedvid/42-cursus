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

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}

int check_set(char c, char const *set)
{
    int i;

    i = 0;
    while (set[i] != '\0')
    {
        if (set[i] == c)
            return (1);
        i++;
    }
    return (0);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int start;
    int end;
    char    *str;
    char    *new;

    i = 0;
    start = 0;
    end = ft_strlen(s1);
    str = (char *) s1;
    while ((check_set(str[i], set)) == 1)
        i++;
    start = i;
    i = 0;
    while ((check_set(str[--end], set)) == 1)
        i++;
    new = (char *)malloc(sizeof(char) * (end - start) + 1);
    ft_memcpy(new, &str[start], (end - start + 1));
    return (new);
}

int main(void)
{
    printf("the trimmed string: %s\n", ft_strtrim("lorem ipsum dolor sit amet", "l"));
    return 0;
}
