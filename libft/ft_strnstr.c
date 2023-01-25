/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 16:11:44 by cvidot            #+#    #+#             */
/*   Updated: 2023/01/14 16:13:28 by cvidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h> //remove later

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!little)
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && i < len)
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

//testing purpose
int main(void)
{
	char str[6] = "hello";
	char str2[4] = "lo";
	printf("the return value is %s\n", ft_strnstr(str, str2, 5));
	return (0);
}

//      The strnstr() function locates the	first occurrence of the	null-termi-
//      nated string little in the	string big, where not more than	len characters
//      are searched.  Characters that appear after a `\0'	character are not
//      searched.	Since the strnstr() function is	a FreeBSD specific API,	it
//      should only be used when portability is not a concern.

// RETURN VALUES
//      If	little is an empty string, big is returned; if little occurs nowhere
//      in	big, NULL is returned; otherwise a pointer to the first	character of
//      the first occurrence of little is returned.