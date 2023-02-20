/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidot <cvidot@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 12:44:19 by cvidot            #+#    #+#             */
/*   Updated: 2023/02/13 12:40:26 by cvidot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_is_set(char const *set, char c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		len;
	char	*start;
	char	*end;
	char	*trim_str;

	i = 0;
	start = (char *) s1;
	end = start + ft_strlen(s1) - 1;
	while (ft_is_set(set, *start))
		start++;
	while (ft_is_set(set, *end) && end > start)
		end--;
	len = end - start + 1;
	trim_str = (char *) malloc(len + 1);
	if (!trim_str)
		return (NULL);
	while (i < len)
	{
		trim_str[i] = start[i];
		i++;
	}
	trim_str[len] = '\0';
	return (trim_str);
}
/*Function name ft_strtrim
Prototype char *ft_strtrim(char const *s1, char const *set);
Turn in files -
Parameters s1: The string to be trimmed.
set: The reference set of characters to trim.
Return value The trimmed string.
NULL if the allocation fails.
External functs. malloc
Description Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string*/
