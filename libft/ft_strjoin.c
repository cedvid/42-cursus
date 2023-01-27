/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 12:43:52 by cvidot            #+#    #+#             */
/*   Updated: 2023/01/16 12:44:06 by cvidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
// #include <stdio.h>

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char    *ft_strjoin(char const *s1, char const *s2)
{
    int i;
    int j;
    char    *str;

    i = 0;
    j = 0;
    str = (char *)malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
    if (!str)
        return (NULL);
    while (s1[i] != '\0')
    {
        str[i] = s1[i];
        i++;
    }
    while (s2[j] != '\0')
    {
        str[i] = s2[j];
        i++;
        j++;
    }
    str[i] = '\0';
    return (str);
}

// int main(void)
// {
//     char str[6] = "hello";
//     char str2[6] = "aloha";
//     printf("the new str is: %s\n", ft_strjoin(str, str2));
//     return 0;
// }