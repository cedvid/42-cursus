/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidot <cvidot@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 16:11:44 by cvidot            #+#    #+#             */
/*   Updated: 2023/01/27 11:22:48 by cvidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	inner_len;

	i = 0;
	if (!little || little[0] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		inner_len = len;
		while (big[i + j] == little[j] && i < inner_len--)
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
/*The strnstr() function locates the first 
occurrence of the null-terminated 
string little in the string big, where not more 
than len characters are searched.  
RETURN VALUES: If little is an empty string, 
big is returned; if little occurs nowhere in big, 
NULL is returned; otherwise a pointer to the first 
character of the first occurrence of little is returned.*/
