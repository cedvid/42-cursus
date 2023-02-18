/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidot <cvidot@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 16:18:27 by cvidot            #+#    #+#             */
/*   Updated: 2023/01/16 10:06:22 by cvidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	int		i;

	dup = (char *) malloc(ft_strlen(s) + 1);
	if (!dup)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*The strdup() function returns a pointer to 
a new string which is a duplicate of the string s.  
Memory for the new string is obtained with malloc(3), 
and can be freed with free(3).
RETURN VALUE: On success, the strdup() function returns 
a pointer to the duplicated string.  
It returns NULL if insufficient memory was available.*/
